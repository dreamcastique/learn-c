#include <stdio.h>

int main() {
    double d = 3.14;
    double *p;
    p = &d;

    printf("*p = %.2f, p = %p, &d = %p\n", *p, (void *)p, (void *)&d);
    printf("%p\n", &p);

    return 0;
}
