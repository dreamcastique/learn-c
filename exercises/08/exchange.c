#include <stdio.h>

int main() {
    int n = 5;
    int *p = &n;

    printf("*p + 10 = %d\n", *p + 10);
    printf("(*p) * 2 = %d\n", (*p) * 2);
    printf("*p * 2 = %d\n", *p * 2);

    return 0;
}
