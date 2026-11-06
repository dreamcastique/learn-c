#include <stdio.h>
#include <string.h>

int main() {
    char word1[99];
    char word2[99];

    printf("Введи два слова: ");
    scanf("%98s %98s", word1, word2);

    if (strcmp(word1, word2) == 0) {
        printf("Слова совпадают\n");
    } else {
        printf("Слова не совпадают\n");
    }

    return 0;
}
