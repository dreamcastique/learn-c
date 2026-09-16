#include <stdio.h>

int main() {
    int sum = 1;

    char a = 'A';
    // -128--------0--------127

    //unsigned int b = 500000;
    // 0----------------

    for (int i = 1; i <= a; i++) {
        sum *= i;
    }

    printf("%d", sum);
    //printf("a = %d, b = %llu", a, b);

    return 0;
}
