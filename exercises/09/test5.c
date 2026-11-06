#include <stdio.h>

int my_strlen(const char *s);
void reverse(char *s);

int main() {
    char word[99];

    printf("Введи слово: ");
    scanf("%98s", word);

    printf("%d\n", my_strlen(word));
    reverse(word);

    printf("%s\n", word);

    return 0;
}

int my_strlen(const char *s) {
    int counter = 0;
    while (*s != '\0') {
        s++;
        counter++;
    }
    return counter;
}

void reverse(char *s) {
    char *left = s;
    char *right = (s + my_strlen(s)) - 1;
                //word[d][a]['\0'] + 2 - 1;

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
