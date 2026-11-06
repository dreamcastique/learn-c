#include <stdio.h>

int main() {
    char word[99];

    printf("Введи слово: ");
    scanf("%98s", word);

    char *left = word;
    char *right = word;

    while (*right != '\0') {
        right++;
    }
    right--;

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    printf("%s\n", word);

    return 0;
}
