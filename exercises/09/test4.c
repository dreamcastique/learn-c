#include <stdio.h>
#include <string.h>

int main() {
    char word[99];

    printf("Введи слово: ");
    scanf("%98s", word);

    //for (int i = (int)strlen(word) - 1; i >= 0; i--) {
    //    printf("%c", word[i]);
    //}
    //

    //char *ptr = word;
    //while(*ptr != '\0') {
    //    printf("%c", *ptr);
    //    ptr++;
    //} 

    char *ptr = word;
    ptr = word + strlen(word);
    for (char *it = ptr - 1; it >= word; it--) {
        printf("%c", *it);
    }

    //while (ptr >= word) {
    //    if (*ptr != '\0') {
    //        printf("%c", *ptr);
    //    }
    //    ptr--;
    //}

    return 0;
}
