#include <stdio.h>
#include <ctype.h>

int my_strlen(const char *s);
int is_palindrome(const char *s);

int main() {
    char word[99];
    
    printf("Введи слово: ");
    scanf("%98s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = (char)tolower(word[i]);
    }

    if (is_palindrome(word)) {
        printf("Палиндром\n");
    } else {
        printf("Не палиндром\n");
    }

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

int is_palindrome(const char *s) {
    const char *left = s;
    const char *right = s + my_strlen(s) - 1;

    while (left < right) {
        if (*left == *right) {
            left++;
            right--;
        } else {
            return 0;
        }
    }
    return 1;
}
