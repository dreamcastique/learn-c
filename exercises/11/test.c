#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("notes.txt", "r");

    if (in == NULL) {
        printf("Не удалось открыть файл на чтение\n");
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), in) != NULL) {
        printf("%s", line);
    }

    fclose(in);

    return 0;
}
