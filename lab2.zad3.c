#include <stdio.h>
int main()
{
    float a,b,c,d=0;

    printf("a=");
    scanf("%f", &a);

    printf("b=");
    scanf("%f", &b);

    c=a+b;
    printf("%.3f\n", c);

    d=a-b;
    printf("%.3f\n", d);

    return 0;

}
