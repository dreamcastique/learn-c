#include <stdio.h>

int main() {
    FILE *out = fopen("users.txt", "a");

    if (out == NULL) {
        printf("Не могу прочитать файл\n");
        return 1;
    }

    printf("Введи имя: ");

    char line[256];

    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("Нечего считывать\n");
        fclose(out);
        return 1;
    } else {
        fprintf(out, "%s", line);
    }

    fclose(out);

    return 0;
}
