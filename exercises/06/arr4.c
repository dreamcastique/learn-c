#include <stdio.h>

int main() {
    int arr[7];
    int index = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 7; i++) {
        if (arr[i] > arr[index]) {
            index = i;
        }
    }

    printf("maximum = %d, index = %d\n", arr[index], index);

    return 0;
}
