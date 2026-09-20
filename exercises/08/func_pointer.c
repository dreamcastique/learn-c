#include <stdio.h>

void set_to_zero(int *ptr);

int main() {
    int a = 10;

    set_to_zero(&a);
    printf("a = %d\n", a);

    return 0;
}

void set_to_zero(int *ptr) {
    *ptr = 0;
}
