#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    float a = 5.127326216321;
    double b= 5.2134332431;
    printf("a=%.17f\n", a);
    printf("b=%.17lf\n", b);                       //tova .if e che e long double
    return 0;
}