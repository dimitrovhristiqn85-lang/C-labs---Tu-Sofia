#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a;
    int b;
    int mul,dev,sub,add;
    printf("Vuvedei purvo chislo:\n");
    scanf("%d", &a);
    printf("Vuvedi vtoro chislo:\n");
    scanf("%d", &b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    dev=a/b;
    printf("Add: %d\n", add);
    printf("Sub: %d\n", sub);
    printf("Mul:%d\n",mul);
    printf("Dev:%d\n",dev);
    return 0;

    int c;
    int d;
    float c1,d1;
    printf("Vuvedet cqla stoinost za c:\n");
    scanf("%d", &c);
    printf("Vuvedete cqla stoinost za d:\n");
    scanf("%d", &d);

    printf("Vuvedete relna stoinost za c1:\n");
    scanf("%f", &c1);
    printf("Vuvedete realna stoinost za d1:\n");
    scanf("%f", &d1);

    printf("c=%d i d=%d", c,d);
    printf("c1=%f i d1=%f", c1,d1);
    printf("c/d=%d/%d",c,d,c/d);
    printf("%d/%d=%f\n",c,d,(float)c/d);
    printf("%f / %d = %f\n",c1,d,c1/d);
    printf("%d / %f = %f\n",a,d1,a/d);
    printf("%f / %f = %f\n",c1,d1,c1/d);
 
}

