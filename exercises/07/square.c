#include <stdio.h>

float area(float width, float height);

int main() {
    printf("%.2f\n", area(2.0f, 2.0f));
    printf("%.2f\n", area(2.1f, 2.3f));

    return 0;
}

float area(float width, float height) {
    return width * height;
}
