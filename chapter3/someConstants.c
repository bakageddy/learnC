#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("%d, %d, %d, %d, %d, ",
            CHAR_BIT, 
            CHAR_MAX,
            CHAR_MIN,
            SCHAR_MAX,
            SCHAR_MIN);
    printf("%a", FLT_EPSILON);
    return 0;
}
