#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
void calc(double r, double*c,double*a);
int main() {

    double x,y,z;
    printf("r=\n");
    scanf("%lf", &x);
    calc(x,&y,&z);
    printf("C=%.2lf, A=%.2lf\n",y,z);
    printf("r=%.2lf\n", x);
    return 0;
}

void calc(double r, double*c,double*a) {
    *c=2*3.14*r;
    *a=3.14*r*r;
    r++;
}