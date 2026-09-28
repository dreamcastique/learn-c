#include <stdio.h>

struct Point {
    int x, y;
};

int sumPoint(struct Point p);

int main() {
    struct Point p = {2, 4};

    printf("%d\n", sumPoint(p));

    return 0;
}

int sumPoint(struct Point p) {
    return p.x + p.y;
}
