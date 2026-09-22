#include <stdio.h>

int main() {
    int counter = 0;
    char word[99];

    printf("Введи слово: ");
    scanf("%98s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'A') {
            counter++;
        }
    }

    printf("%d\n", counter);

    return 0;
}
