#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1 = {2, 4};

    printf("X: %d, Y: %d\n", p1.x, p1.y);

    return 0;
}
