#include <stdio.h>

int main() {
    FILE *in = fopen("notes.txt", "r");

    if (in == NULL) {
        printf("Не удалось открыть файл на чтение\n");
        return 1;
    }

    FILE *out = fopen("copy_notes.txt", "w");

    if (out == NULL) {
        printf("Не удалось открыть файл на запись\n");
        fclose(in);
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), in) != NULL) {
        fputs(line, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
