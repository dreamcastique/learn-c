#include <stdio.h>

int main() {
    int a = 5;

    int *p;

    p = &a;

    printf("p = %p\n", p);

    *p += 1;

    printf("a = %p\n*p = %p\n", &a, p);

    p += 1;

    printf("a+1 = %p\na = %d\np = %ls\n", &a, a, p);

    return 0;
}
