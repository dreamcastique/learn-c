#include <stdio.h>

int sum_to_n(int n);

int main() {
    int m;

    printf("Введи целое неотрицательное число: ");
    if (scanf("%d", &m) != 1) {
        printf("Ошибка ввода\n");
        return 1;
    }

    if (m < 0) {
        printf("Число не должно быть отрицательным\n");
        return 1;
    }

    printf("%d\n", sum_to_n(m));

    return 0;
}

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
