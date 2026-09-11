#include <stdio.h>

int main() {
    int pass;

    printf("Введите пароль: ");
    scanf("%d", &pass);

    if (pass == 1234) {
        printf("Доступ разрешен\n");
    } else {
        printf("Доступ запрещен\n");
        return 0;
    }

    return 0;
}
