#include <stdio.h>

int main() {
    double arr[4];

    arr[0] = 1.5;
    arr[1] = 2.5;
    arr[2] = 3.5;
    arr[3] = 4.5;

    for (int i = 0; i < 4; i++) {
        printf("arr[%d] = %.1f\n", i, arr[i]);
    }

    return 0;
}
