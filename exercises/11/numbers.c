#include <stdio.h>

int main() {
    int a, b, c;

    FILE *out = fopen("numbers.txt", "w");

    if (out == NULL) {
        printf("Не удалось открыть файл на запись\n");
        return 1;
    }

    printf("Введи 3 целых числа:\n");

    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        printf("Не удалось прочитать 3 числа\n");
        fclose(out);
        return 1;
    } else {
        fprintf(out, "%d\n", a);
        fprintf(out, "%d\n", b);
        fprintf(out, "%d\n", c);
    }

    fclose(out);

    int x, y, z;

    FILE *in = fopen("numbers.txt", "r");

    if (in == NULL) {
        printf("Не удалось открыть файл на чтение\n");
        return 1;
    }

    if (fscanf(in, "%d%d%d", &x, &y, &z) != 3) {
        printf("Не удалось прочитать 3 числа из файла\n");
        fclose(in);
        return 1;
    } else {
        printf("Сумма: %d\n", x + y + z);
    }

    fclose(in);

    return 0;
}
