#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    int *pa = &a;
    int *pb = &b;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("a = %d, &a = %p, pa = %p\n", a, (void *)&a, (void *)pa);
    printf("b = %d, &b = %p, pb = %p\n", b, (void *)&b, (void *)pb);

    return 0;
}
