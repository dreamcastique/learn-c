# C - Урок 09:

## Пройдено
- Строка = массив char + завершающий '\0'
- `sizeof` дает размер массива, `strlen` - длину без '\0'
- `strcmp` возвращает 0 при равенстве; сравнивать с нулем, а не с конкретным числом
- `strcpy` копирует, `strcat` дописывает - но только в валидную строку
- кириллица в `UTF-8` занимает в 2 раза больше места


## Код
```c
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
```

## Ошибки
- много
