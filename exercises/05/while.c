#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Введи целое число: ");

    sum = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        sum += n;
    }

    printf("%d\n", sum);

    return 0;
}
