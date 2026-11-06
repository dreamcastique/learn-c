#include <stdio.h>

int main() {
    int n;

    printf("Введи номер месяца: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
        case 2:
        case 12:
            printf("Зима\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Весна\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Лето\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Осень\n");
            break;
        default:
            printf("Неверный месяц\n");
            break;
    }

    return 0;
}
