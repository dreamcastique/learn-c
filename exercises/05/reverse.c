#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Введи целое число: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Некорректное число\n");
        return 1;
    }

    i = n;
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    return 0;
}
