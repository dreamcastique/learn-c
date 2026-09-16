#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    do {
        printf("Введи целое число (-1 - выход): ");
        scanf("%d", &n);

        if (n < 0) continue;

        sum += n;

    } while (n != -1);

    printf("%d\n", sum);

    return 0;
}
