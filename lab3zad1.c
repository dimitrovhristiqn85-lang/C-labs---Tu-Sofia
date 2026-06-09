#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f1(int t);
void f2(int t);
void f3(int*t);

int main() {

    int x,res;
    printf("x=");
    scanf("%d", &x);
    printf("prdi f1 x = %d\n", x);
    res=f1(x);
    printf("sled f1 res =%d\n\n", res);

    printf("predi f2 x = %d\n", x);
    f2(x);
    printf("sled f2 x = %d\n\n",x);

    printf("predi f3 x = %d\n", x);
    f3(&x);
    return 0;
}
int f1(int t) {
    return t*3;
}

void f2(int t) {
   t=t*3;
    printf("%d", t);
}

void f3(int *t) {
    *t=(*t)*3;                                                                                          //nqma retur v void funciq
} 