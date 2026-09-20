#include <stdio.h>

int is_even(int n);

int main() {
    printf("%d\n", is_even(2));
    printf("%d\n", is_even(3));

    return 0;
}

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
