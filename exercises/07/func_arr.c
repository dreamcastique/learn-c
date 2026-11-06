#include <stdio.h>

int array_sum(int arr[], int size);
int array_max(int arr[], int size);

int main() {
    int arr[6] = {-4,4,3,-2,10,1};

    printf("Массив: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("%d\n", array_sum(arr, 6));
    printf("%d\n", array_max(arr, 6));


    return 0;
}

int array_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int array_max(int arr[], int size) {
    if (size <= 0) {
        printf("Массив не должен быть пустым!\n");
        return 1;
    }

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    } 
    return max;
}
