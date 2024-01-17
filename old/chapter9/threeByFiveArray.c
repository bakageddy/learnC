#include <stdio.h>

#define ROW 3
#define COL 5

void getInput(double* array, int size);
void enterInThis(double array[][COL], int size);
double averageForEachArray(double* array, int size);
void printMe(double* array, int size);

int main(void) {
    double arrayWithDoubles[ROW][COL];
    double averages[ROW];
    enterInThis(arrayWithDoubles, ROW);
    for (int i = 0; i < ROW; i++) {
        averages[i] = averageForEachArray(arrayWithDoubles[i], COL);
    }
    printMe(averages, ROW);
    printf("%lf\n", averageForEachArray(averages, ROW));
    return 0;
}

void getInput(double* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter a number at %dth position: ", i);
        scanf("%lf", &array[i]);
    }
    printf("Ok Done!");
}

void enterInThis(double array[][COL], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter Elements for this array: ");
        getInput(array[i], 5);
        printf("\n\n");
    }
}

double averageForEachArray(double* array, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;

}

void printMe(double* array, int size) {
    for (int i = 0; i < size; i++)
        printf("%lf ", array[i]);
    printf("\n");
}
