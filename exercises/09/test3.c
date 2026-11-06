#include <stdio.h>

int main() {
    int x = 42;
    char arr[99];
    
    scanf("%98s", arr);

    printf("x = %zu, arr = %zu\n", sizeof(x), sizeof(arr));

    return 0;
}
