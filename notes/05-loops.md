# C - Урок 05:

## Пройдено
- `for` если мы знаем сколько итераций, `while` если не знаем сколько, `do-while` чтобы хотя бы раз условие выполнилось
- счетчик сравнивается с условием `i <= n;` перед каждой итерацией, и пока это условие истинно - продолжаем, а иначе цикл останавливается
- `break` выходит из цикла, `continue` пропускает текущую итерацию


## Код
```c
#include <stdio.h>

int main() {
    int n = 10;
    int i;
    int sum;

    printf("FOR:\n");
    sum = 0;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
        printf("i = %d\tsum = %d\n", i, sum);
    }

    printf("WHILE:\n");
    i = n;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    int choice;
    do {
        printf("1 - сказать привет, 0 - выход: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Привет!\n");
        }
    } while (choice != 0);

    printf("Пока!\n");

    return 0;
}
```

## Ошибки
- много...
