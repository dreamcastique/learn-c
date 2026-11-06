#include <stdio.h>

int main() {
    char name[20];

    printf("Введите имя: ");
    scanf("%19s", name);

    printf("Привет, %s!\n", name);

    return 0;
}
