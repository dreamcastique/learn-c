#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    //int *p = arr;

    for (int i = 0; i < 5; i++) {
        //printf("%d ", *(arr + i)); // вывод через указатель
        //printf("%d ", *p);
        //p++;
        printf("%d ", arr[i]); // обычный вывод массива
    }

    printf("\n");

    return 0;
}
