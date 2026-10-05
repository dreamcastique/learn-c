#include <stdio.h>

#define DEBUG 1
#define LEN_ARR 5

int sum_array(int *arr, int n);

int main() {
    int arr[LEN_ARR] = {1, 2, 3, 4, 5};

    printf("sum = %d\n", sum_array(arr, LEN_ARR));

    return 0;
}

int sum_array(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
#ifdef DEBUG
        printf("[debug] %d = %d\n", arr[i], sum);
#endif
    }

    return sum;
}
