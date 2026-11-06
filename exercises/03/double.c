#include <stdio.h>

int main() {
    int a, b;
    double c;

    printf("Введи 2 целых числа: ");
    scanf("%d%d", &a, &b);

    printf("\n");
    c = (a + b) / 2.0;
    printf("%.2f\n", c);

    return 0;
}
