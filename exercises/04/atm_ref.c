#include <stdio.h>

int main() {
    int code;
    int balance = 1000;
    int withdraw;

    printf("Введите сумму снятия: ");
    scanf("%d", &withdraw);

    if (withdraw < 0)             code = 1;
    else if (withdraw > balance)  code = 2;
    else if (withdraw == balance) code = 3;
    else                          code = 4;

    switch (code) {
        case 1: printf("Некорректная сумма\n"); return 1;
        case 2: printf("Недостаточно средств\n"); return 1;
        case 3: printf("Счёт обнулён\n"); break;
        case 4: printf("Остаток = %d\n", balance - withdraw); break;
    }
}
