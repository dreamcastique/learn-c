#include <stdio.h>

void print_number_info(int n);

int main() {
    print_number_info(4);
    print_number_info(7);

    return 0;
}

void print_number_info(int n) {
    printf("Число: %d\nКвадрат: %d\n", n, n * n);
}
