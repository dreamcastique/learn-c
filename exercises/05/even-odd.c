#include <stdio.h>

int main() {
    float n = 30.0;
    float i;

    for (i = 5; i <= n; i += 1.2) {
        printf("%.1f ", i);
    }

    return 0;
}
