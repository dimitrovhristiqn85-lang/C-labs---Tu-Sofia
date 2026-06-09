#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    
    int a;
    float b;
    char c = 0;

   
    printf("Enter one symbol: ");
  
    scanf(" %c", &c); 

    printf("Enter one number: ");
    scanf("%d", &a);

    printf("Enter one float: ");
    scanf("%f", &b);

    printf("\nThats the input values:\n");
    printf("As are the follows:\n");
    printf("a=%d\tb=%f\tc=%c\n", a, b, c);

    
    printf("\nMemory Sizes:\n");

    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of bytes for float: %zu bytes\n", sizeof(b));
    printf("Size of bytes for char: %zu bytes\n", sizeof(c));

    return 0; 
}