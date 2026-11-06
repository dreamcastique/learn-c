#include <stdio.h>

int max(int a, int b);

int main() {

    printf("%d\n", max(2, 5));

    return 0;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
