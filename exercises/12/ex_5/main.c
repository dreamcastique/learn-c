#include <stdio.h>
#include "calc.h"

int main() {
    int a, b;
    char op;

    printf("Введи два целых числа и символ операции (или 'q' для выхода)\n");

    while(1) {
        printf("> ");
        if (scanf("%d %c %d", &a, &op, &b) != 3) {
            break;
        }

        int ok = 1;
        int res = 0;

        switch (op) {
            case '+':
                res = add(a, b);
                break;
            case '-':
                res = sub(a, b);
                break;
            case '*':
                res = mul(a, b);
                break;
            case '/':
                res = divide_safe(a, b, &ok);
                if (!ok) {
                    printf("На ноль делить нельзя!\n");
                    continue;
                }
                break;
            default:
                printf("Неизвестная операция: %c\n", op);
                continue;
        }

        printf("%d %c %d = %d\n", a, op, b, res);
        printf("MAX: %d\n", MAX(a, b));
    }


    return 0;
}
