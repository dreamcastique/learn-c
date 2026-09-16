#include <stdio.h>

int main() {
    int n = 10;
    int i;
    int sum;

    printf("FOR:\n");
    sum = 0;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
        printf("i = %d\tsum = %d\n", i, sum);
    }

    printf("WHILE:\n");
    i = n;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    int choice;
    do {
        printf("1 - сказать привет, 0 - выход: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Привет!\n");
        }
    } while (choice != 0);

    printf("Пока!\n");

    return 0;
}
