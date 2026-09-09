# C - Урок 02:

## Пройдено
- создали целочисленную переменную (int name)
- присвоили значение (name = 5)
- `printf("%d", name)` для вывода значения
- `scanf("%d", &name)` для считывания значения


## Код
```c
#include <stdio.h>

int main() {
        int age;
        int year = 2026;

        scanf("%d", &age);
        printf("Ваш возраст: %d лет\n", age);

        int birth_year = year - age;
        printf("Вы родились примерно в %d году\n", birth_year);

        return 0;
    }
```

## Ошибки
- & забыл в scanf
