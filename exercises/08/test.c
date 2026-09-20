#include <stdio.h>

int increment(int count) {
    return count + 1;
}

int main(void) {
    int c = 0;
    c = increment(c);   // 1
    c = increment(c);   // 2
    c = increment(c);   // 3
    printf("count = %d\n", c);
    return 0;
}
