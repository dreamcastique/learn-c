#include <stdio.h>

int main(void) {
    int score;

    printf("Введи балл за экзамен: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Некорректный балл\n");
        return 1;
    } else if (score >= 90) {
        printf("Отлично\n");
    } else if (score >= 75) {
        printf("Хорошо\n");
    } else if (score >= 60) {
        printf("Удовлетворительно\n");
    } else {
        printf("Не сдано\n");
    }

    return 0;
}
