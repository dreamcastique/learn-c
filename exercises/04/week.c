#include <stdio.h>

int main(void) {
    int day;

    printf("Введи день: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Понедельник\n");
            break;
        case 2:
            printf("Вторник\n");
            break;
        case 3:
            printf("Среда\n");
            break;
        case 4:
            printf("Четверг\n");
            break;
        case 5:
            printf("Пятница\n");
            break;
        case 6:
            printf("Суббота\n");
            break;
        case 7:
            printf("Воскресенье\n");
            break;
        default:
            printf("Неизвестный день.\n");
            break;
    }

    return 0;
}
