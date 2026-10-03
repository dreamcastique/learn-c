# C - Урок 11:

## Пройдено
- `FILE *` - указатель на структуру (`fopen` сам ее создает и открывает файлы), нужен для работы с уже открытыми файлами
- режимы открытия файлов `r`, `w`, `a` - чтение, запись, добавление соотв.
- проверять `fopen` на `NULL` необходимо для стабильной работы программы
- `while (fgets(line, sizeof(line), in) != NULL)` - читать файл построчно и определять конец файла
- `fclose` нужен для безопасного закрытия файла, без него данные могут потеряться


## Код
```c
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
```

## Ошибки
- много
