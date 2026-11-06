#include <stdio.h>

int main() {
    int number;
    int a, b, c;

    printf("Введи трехзначное число: ");
    scanf("%d", &number);

    a = number / 100; 
    b = number % 100 / 10;
    c = number % 10;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    printf("%d\n", (a+b+c) % 2 == 0);


    return 0;
}
