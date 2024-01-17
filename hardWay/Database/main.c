#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 512
#define MAX_DATA 512

typedef struct {
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX_DATA];
} Address;

typedef struct {
	Address rows[MAX_ROWS];
} Database;

typedef struct {
	FILE* file;
	Database* db;
} Connection;

void die(const char* msg) {
	fprintf(stderr, "%s", msg);
	exit(1);
}

void print_address(const Address* addr) {
	printf("%d %s %s\n", addr -> id, addr -> name, addr -> email);
}

void load_database(Connection *conn) {
	int rc = fread(conn -> db, sizeof(Database), 1, conn -> file);
	if (rc != 1) {
		fprintf(stderr, "Failed to load database!\n");
		exit(-1);
	}
}

Connection* create_database(const char* filename, char mode) {
	Connection* conn = malloc(sizeof(Connection));
	if (!conn) die("Failed to create connection");
	conn -> db = malloc(sizeof(Database));
	if (!conn -> db) die("Failed to create database");
	if (mode == 'c') {
		conn -> file = fopen(filename, "w");
		if (!conn -> file) {
			die("Failed to open file!");
		}
	} else {
		conn -> file = fopen(filename, "r");
		if (!conn -> file) {
			die("Failed to open file!");
		}
		load_database(conn);
	}
	return conn;
}

void close_database(Connection *conn) {
	if (conn) {
		if (conn -> file)
			fclose(conn -> file);
		if (conn -> db)
			free(conn -> db);
		free(conn);
	}
}

void write_database(Connection *conn) {
	rewind(conn -> file);
	int rc = fwrite(conn -> db, sizeof(Database), 1, conn -> file);
	printf("%d\n", rc);
	if (rc != 1) die("Failed to write database!\n");
	fflush(conn -> file);
}

void init_database(Connection *conn) {
	for (int i = 0; i < MAX_ROWS; i++) {
		conn -> db -> rows[i] = (Address) {.id = i, .set = 0};
	}
}

void database_set_record(Connection *conn, int id, const char *name, const char *email) {
	assert(id < MAX_ROWS);
	Address *addr = &conn -> db -> rows[id];
	if (addr -> set) die("Cannot overwrite data, Use Update instead\n");
	addr -> set = 1;
	char *res = strncpy(addr -> name, name, MAX_DATA);
	res[MAX_DATA - 1] = '\0';    // Strncpy doesn't pad with null terminator if name has MAX_DATA bytes
	
	if (!res) die("Name copy failed!\n");

	res = strncpy(addr -> email, email, MAX_DATA - 1);
	res[MAX_DATA - 1] = '\0';

	if (!res) die("Email copy failed!\n");
}

Address database_get_record(Connection *conn, const int id) {
	assert(id < MAX_ROWS);
	if (conn -> db -> rows[id].set) {
		return conn -> db -> rows[id];
	} else {
		die("ID is not set\n");
	}
}

void database_delete_record(Connection *conn, const int id) {
	assert(id < MAX_ROWS);
	conn -> db -> rows[id] = (Address) {.id = id, .set = 0};
}

void database_list(const Connection* conn) {
	Database* db = conn -> db;
	for (int i = 0; i < MAX_ROWS; i++) {
		Address *addr = &db -> rows[i];
		if (addr -> set) {
			print_address(addr);
		}
	}
}

int main(int argc, char* argv[]) {
	if (argc < 3) die("USAGE: db <dbfile> <action> [params]");
	char *filename = argv[1];
	char action = argv[2][0];
	Connection *conn = create_database(filename, action);
	int id = 0;

	if (id >= MAX_ROWS) die("That's not how it works buddy, Getouttahere\n");

	switch (action) {
	case 'c':
		init_database(conn);
		write_database(conn);
		break;
	case 'g':
		if (argc != 4) die("Need an id");
		id = atoi(argv[3]);
		Address addr = database_get_record(conn, id);
		print_address(&addr);
		break;
	case 's':
		if (argc != 6) die("Need a id, name, email to set!\n");
		id = atoi(argv[3]);
		database_set_record(conn, id, argv[4], argv[5]);
		write_database(conn);
		break;
	case 'd':
		if (argc != 4) die("Need an id");
		id = atoi(argv[3]);
		database_delete_record(conn, id);
		write_database(conn);
		break;
	case 'l':
		database_list(conn);
		break;
	default:
		die("Invalid action: c = create, g = get, s = set, d = delete, l = list\n");
	}

	close_database(conn);
	return 0;
}
