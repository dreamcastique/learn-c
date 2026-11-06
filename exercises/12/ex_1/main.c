#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    printf("Минимум: %d\n", MIN(3, 7));
    printf("Минимум: %d\n", MIN(-1, -5));
    printf("Минимум: %d\n", MIN(10, 10));

    return 0;
}
