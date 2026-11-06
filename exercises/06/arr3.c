#include <stdio.h>

int main() {
    float arr[5];
    float sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("sum = %.2f\nsrednee = %.2f\n", sum, sum / 5.0);

    return 0;
}
