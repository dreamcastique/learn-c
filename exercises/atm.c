#include <stdio.h>

int main(void) {
    int balance = 1000;
    int withdraw;

    printf("Введите сумму снятия: ");
    scanf("%d", &withdraw);

    if (withdraw < 0) {
        printf("Некорректная сумма\n");
        return 1;
    } else if (withdraw > balance) {
        printf("Недостаточно средств\n");
        return 1;
    } else if (balance == withdraw) {
        printf("Счет обнулен.\nОстаток = 0\n");
    } else {
        printf("Остаток = %d\n", balance - withdraw);
    }

    return 0;
}
