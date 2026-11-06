#include <stdio.h>

int main() {
    int a, b;

    printf("Введи два целых числа: ");
    scanf("%d%d", &a, &b);

    printf("%d", (a > b) ? (a - b) : (a + b));

    return 0;

}
