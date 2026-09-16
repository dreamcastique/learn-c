#include <stdio.h>

int main() {
    int n;

    do {
        printf("Введи целое число (0 - выход): ");
        scanf("%d", &n);
        if (n == 0) continue;
        printf("Введено число: %d\n", n);
    } while (n != 0);

    return 0;
}
