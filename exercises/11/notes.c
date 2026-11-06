#include <stdio.h>

int main() {
    int counter = 0;

    FILE *in = fopen("notes.txt", "r");

    if (in == NULL) {
        printf("Не удалось открыть файл на чтение\n");
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), in) != NULL) {
        counter++;
    }

    printf("В файле %d строк(и)\n", counter);

    return 0;
}
