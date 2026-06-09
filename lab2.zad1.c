#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float a,b,c,x,y=0;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f", &c);
    printf("x=");
    scanf("%f", &x);
    y=a*x+2*15*b-c;
    printf("%.2f\n",y);
    printf("razmerut na a: %zu\n", sizeof(a));
    printf("razmerut na b: %zu\n", sizeof(b));
    printf("razmerut na c: %zu\n", sizeof(c));
    printf("razmerut na x: %zu\n", sizeof(x));
    printf("raazmerut na y: %zu\n", sizeof(y));
    return 0;
}