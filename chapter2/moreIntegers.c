#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int32_t aInt = 100000;
    printf("The 32-bit integer with d : %d\n", aInt); // System specific.
    printf("The 32-bit integer with a special macro: %" PRId32 "\n", aInt); // Not Specific.
    // Also, C combines the consecutive strings together in an arguement.
    return 0;
}
