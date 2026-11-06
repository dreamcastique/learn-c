#include <stdio.h>

int main() {
    int number = 42;
    int n;
    int count = 0;

    while (1) {
        printf("Введи число (0 - выход): ");
        scanf("%d", &n);

        if (n == 0) {
            printf("Сдался\n");
            return 1;
        }
        count++;

        if (n > number) {
            printf("Больше\n");
        } else if (n < number) {
            printf("Меньше\n");
        } else if (n == number) {
            printf("Угадал за %d попыток\n", count);
            break;
        }
    }

    return 0;

}
