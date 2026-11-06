#include <stdio.h>

struct Student {
    char name[50];
    int age;
    double average;
};

int main() {
    struct Student group[3] = {
        {"Petr", 18, 4.1},
        {"Anna", 19, 4.7},
        {"Oleg", 20, 3.9}
    };

    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Average: %.2f\n",
                group[i].name, 
                group[i].age, 
                group[i].average);
        printf("%ld\n", sizeof(struct Student));
    }

    return 0;
}
