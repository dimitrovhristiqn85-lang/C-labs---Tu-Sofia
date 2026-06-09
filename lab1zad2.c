#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a;
    float b;
    char f=0;
    printf("Enter a symbol");
    scanf("%c", &f);
    printf("enter a number");
    scanf("%d", &a);
    printf("Enter a float number");
    scanf("%f", &b);
    printf("That's the way of order:\n");
    printf("a=%5d\n",a);
    printf("b=%.2f\n",b);
    printf("f=%5c\n", f);
    printf("The size of things:\n");
    printf("Size of int: %zu bitys\n", sizeof(a));
    printf("Size of float: %zu bitys\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(f));
    return 0;

}