#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
int subtract(int a, int b);
int mul(int a, int b);
int devision(int a, int b);

int main() {
    int x, y, res, cod;
    int (*fp)(int, int);

    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);

    do {
        printf("0:Add, 1:Subtract, 2:multiply, 3:devision\n");
        do {
            printf("cod=");
            scanf("%d", &cod);
        } while (cod < 0 || cod > 4);

        switch (cod) {
            case 0:
                fp = sum;
                res = (fp)(x, y);
                printf("The x+y is %d \n", res);
              break;
            case 1:
                fp = subtract;
                res = (fp)(x, y);
                printf("The x-y=%d\n", res);
              break;
            case 2:
                fp = mul;
                res = (fp)(x, y);
                printf("The x*y=%d\n", res);
               break;
            case 3:
                fp = devision;
                res = (fp)(x, y);
                printf("The x/y=%d\n", res);
               break;
            default:
                printf("Ne e chast ot vusmojnostite");
              
        }
    } while (cod != 4);

    return 0;
}

int sum(int a, int b) {
    int suma = 0;
    suma = a + b;
    return suma;
}

int subtract(int a, int b) {
    int sub = 0;
    sub = a - b;
    return sub;
}

int mul(int a, int b) {
    int multiply = 0;
    multiply = a * b;
    return multiply;
}

int devision(int a, int b) {
    int dev;
    dev = a / b;
    return dev;
}