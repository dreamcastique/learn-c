#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "Hello";

    printf("word = %s\n", word);

    for (int i = 0; word[i] != '\0'; i++) {
        printf("word[%d] = %c\n", i, word[i]);
    }

    char buffer[32];
    strcpy(buffer, word);
    strcat(buffer, ", word");

    printf("buffer = %s\n", buffer);

    if (strcmp(word, "Hello") == 0) {
        printf("Строки равны\n");
    } else {
        printf("Строки не равны\n");
    }

    return 0;
}
