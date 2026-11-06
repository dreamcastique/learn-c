#include <stdio.h>

struct Product {
    char name[50];
    double price;
    int quantity;
};

double totalCost(struct Product *p);

int main() {
    double total = 0;

    struct Product products[3] = {
        {"hhkb", 250.0, 5},
        {"filco", 100.0, 8},
        {"microsoft", 19.99, 150},
    };

    int n = sizeof(products) / sizeof(products[0]);
    for (int i = 0; i < n; i++) {
        double temp = totalCost(&products[i]);
        total += temp;
        printf("Название: %s, Цена: %.2f, Количество: %d, Стоимость: %.2f\n",  
                products[i].name,
                products[i].price,
                products[i].quantity,
                temp);
    }

    printf("Всего: %.2f\n", total);

    return 0;
}

double totalCost(struct Product *p) {
    printf("%.ld\n", sizeof(p));
    return p->price * p->quantity;
}
