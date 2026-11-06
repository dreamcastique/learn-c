#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";
    char b[] = "World";
    char result[32];

    strcpy(result, a);
    strcat(result, " ");
    strcat(result, b);

    printf("%s\n", result);

    return 0;
}
