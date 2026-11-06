#include <stdio.h>

int count_words(const char *s);

int main() {
    char words[99];

    printf("Введи несколько слов через пробел: ");
    scanf("%98[^\n]", words);

    printf("%d\n", count_words(words));


    return 0;
}

int count_words(const char *s) {
    int counter = 0;
    int in_word = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && in_word == 0) {
            counter++;
            in_word = 1;
        } else if (s[i] == ' ' && in_word == 1) {
            in_word = 0;
        }
    }
    return counter;
}
