#include <stdio.h>

int main() {
    int arr[5];
    int n;
    int counter = 0;

    printf("Заполните массив из 5 целых чисел\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // arr[5] = {1,1,1,1,0};

    printf("Введите целое число: ");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++) {
        if (n == arr[i]) {
            counter++;
        }
    }

    printf("Число %d встречается %d раз(а)\n", n, counter);

    return 0;
}
