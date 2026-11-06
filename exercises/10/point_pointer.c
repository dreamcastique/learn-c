#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p = {2, 3};
    struct Point *ptr = &p;

    ptr->x = 10;
    //(*ptr).x = 10;

    printf("X: %d\n", p.x);

    return 0;
}
