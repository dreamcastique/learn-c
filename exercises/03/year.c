#include <stdio.h>

int main() {
    int year;

    printf("Введи год: ");
    scanf("%d", &year);

    printf("%d", ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

    return 0;
}
