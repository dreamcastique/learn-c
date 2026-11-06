#include <stdio.h>

struct Book {
    char title[100];
    int pages;
    double price;
};

int main() {
    struct Book b = {"Война и мир", 1000, 2000.50};

    printf("Title: %s, Pages: %d, Price: %.2f\n", b.title, b.pages, b.price);

    return 0;
}
