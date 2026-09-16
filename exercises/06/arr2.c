#include <stdio.h>

int main() {
    int arr[6];

    for (int i = 0; i < 6; i++) {
        arr[i] = i + 1;
    }

    for (int i = 5; i >= 0; i--) {
        printf("\U0001F600arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
