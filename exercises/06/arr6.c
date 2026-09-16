#include <stdio.h>

int main() {
    int N;
    double minimum;
    double sum = 0;
    int index = 0;
    int counter = 0;
    double avg;

    printf("Введи целое число (1-20): ");
    scanf("%d", &N);

    if (N < 1 || N > 20) {
        printf("Неверный размер\n");
        return 1;
    }

    double arr[N];
    printf("Введи %d чисел\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &arr[i]);
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

    printf("sum = %.2f, avg = %.2f, minimum = %.2f, index = %d, counter = %d\n", sum, avg, minimum, index, counter);

    return 0;
}
