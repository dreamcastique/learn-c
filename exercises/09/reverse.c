#include <stdio.h>
#include <string.h>

int main() 
{
    char word[99];

    printf("Введи слово без пробелов: ");
    scanf("%98s", word);

    for (int i = (int)strlen(word) - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }

    printf("\n");

    return 0;
}
