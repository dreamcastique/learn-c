#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    int res;

    printf("Введи два целых числа и символ операции: ");
    scanf("%d%d %c", &a, &b, &op);

    switch (op) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("На 0 делить нельзя\n");
                return 1;
            }

            res = a / b;
            break;
            
        default:
            printf("Неизвестная операция\n");
            return 1;
    }
    
    printf("%d %c %d = %d\n", a, op, b, res);

    return 0;
}
