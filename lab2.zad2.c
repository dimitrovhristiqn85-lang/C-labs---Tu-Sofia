#define _CTR_SECURE_NO_WARNIGS
#include <stdio.h>
int main() {
    int a=12,b=5;

    printf("1: %d\n",a/b);

    printf("2: %d\n", ++a - b--);

    printf("3: a=%d, b=%d\n", a,b);

    a=12;
    b=5;
    printf("4: %f\n", (float)a);

    printf("5:%d\n", 2*(a+b));

    printf("6: %d\n", 2*a+b);

    printf("7:%d\n", a<b);

    a=0;
    
    printf("8: %d\n", a&&b);

    printf("9: %d\n", a||b);

    printf("10: %d\n", !a);

    return 0;


}