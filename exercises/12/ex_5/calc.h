#ifndef CALC_H
#define CALC_H

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int add(int, int);

int sub(int, int);

int mul(int, int);

int divide_safe(int a, int b, int *ok);

#endif
