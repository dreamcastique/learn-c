#include <stdio.h>

int main() {
    int temp;

    printf("Введи температуру: ");
    scanf("%d", &temp);

    if (temp < 0) {
        printf("На улице мороз\n");
    } else if (temp <= 15) {
        printf("Прохладно\n");
    } else {
        printf("Тепло\n");
    }

    return 0;
}
