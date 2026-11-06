#include <stdio.h>

int main() {
    int n;
    int i;
    long long factorial;

    printf("Введи целое положительное число: ");
    scanf("%d", &n);

    factorial = 1;
    for (i = 1; i <= n; i++) {
       factorial *= i; 
    }

    printf("%llu", factorial);

    return 0;
}
