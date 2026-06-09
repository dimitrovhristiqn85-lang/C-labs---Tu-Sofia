#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    int a=5,b=3,r;
    printf("Predi:a=%d,b=%d\n",a,b);
    printf("Subirane:%d\n",a+b);
    printf("Sled: a = %d, b=%d\n",a,b);
    printf("Predi: a = %d, b = %d\n",a,b);
    r=--a+b;
    printf("r: %d\n", r);
    printf("sled:a=%d,b=%d\n",a,b);
    a=5;
    printf("sled: a = %d,b=%d",a,b);
    r=(a--)+b;
    printf("r:%d\n",r);
    printf("Sled: a=%d,b=%d\n",a,b);
    return 0;

}