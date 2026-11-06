#include <stdio.h>
#include <string.h>

int main() 
{
    char word[99];

    printf("Введи слово без пробелов: ");
    scanf("%98s", word);

    //for (int i = (int)strlen(word) - 1; i >= 0; i--) {
    //    printf("%c", word[i]);
    //}

    char *ptr = word;
    while(*ptr != '\0') {
        ptr++; 
    }

    while (ptr >= word) {
        if (*ptr != '\0') {
            printf("%c", *ptr);
        };
        ptr--;
    }

    printf("\n");

    return 0;
}
