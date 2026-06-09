#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void change(int*a);
int main() {
    int x;
    printf("X=\n");
    scanf("%d", &x);
    change(&x);                                //tova se pravi kato parametura na funciqta e ukazatel, a inache funkciqta subira s dve 
    printf("change=%d\n", x);
    return 0;
}
void change(int*a) {
    *a=*a+2;                          //zahtoto tuk rabotim direkto vurhu originalnata kletka pamet na x v tozi slchai i zatova nqma return
}

