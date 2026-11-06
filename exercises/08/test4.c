#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};

    int *p = &arr[4];

    printf("p = %p, *p = %d, arr[0] = %d, *arr = %d\n", p, *p, arr[0], *arr);

    p = &arr[4];

    *p += 1;

    printf("p = %p, *p = %d, arr[0] = %d, *arr = %d\n", p, *p, arr[0], *arr);

    return 0;
}
