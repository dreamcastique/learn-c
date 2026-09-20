#include <stdio.h>

int main() {
    int N;
    int index = 0;
    int counter = 0;
    double minimum;
    double sum;
    double avg;

    printf("Введи целое число (1-20): ");
    if (scanf("%d", &N) != 1) {
        printf("Ошибка ввода\n");
        return 1;
    }

    if (N < 1 || N > 20) {
        printf("Неверный размер\n");
        return 1;
    }

    double arr[N];
    printf("Введи %d чисел\n", N);
    for (int i = 0; i < N; i++) {
        if (scanf("%lf", &arr[i]) != 1) {
            printf("Ошибка ввода элемента %d\n", i);
            return 1;
        }
    }

    minimum = arr[0];
    sum = arr[0];
    for (int i = 1; i < N; i++) {
        sum += arr[i];
        if (arr[i] < minimum) {
            minimum = arr[i];
            index = i;
        }
    }

    avg = sum / N;

    for (int i = 0; i < N; i++) {
       if (arr[i] > avg) {
           counter++;
       } 
    }

    printf("sum = %.2f\n", sum);
    printf("avg = %.2f\n", avg);
    printf("minimum = %.2f\n", minimum);
    printf("index = %d\n", index);
    printf("counter = %d\n", counter);

    return 0;
}
