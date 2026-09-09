#include <stdio.h>

int main() {
    int a, b, c;

    printf("Введи 3 целых числа: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("%d\n", ((a + b) > c) && ((a + c) > b) && ((b + c) > a));
    
    return 0;
}
