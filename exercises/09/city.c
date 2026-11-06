#include <stdio.h>
#include <string.h>

int main() {
    char city[] = "Moscow";

    printf("%s\n", city);
    printf("sizeof = %zu\n", sizeof(city)); // тут включая '\0'
    printf("strlen = %zu\n", strlen(city)); // тут без '\0'

    return 0;
}
