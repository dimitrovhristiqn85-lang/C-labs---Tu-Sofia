#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fibonaci(int n);


int main() {

    int limit;
    printf("Vuvedete chislo:\n");
    scanf("%d",&limit);

    printf("Redicata na fibonachi e: \n");
    fibonaci(limit);

    return 0;
}

void fibonaci(int n) {
    int a=0, b=1, c;
    int num=0;
    for(int i=0;a<n;i++) {
        printf("%d", a);
        c= a+b;
        a=b;
        b=c;
        num++;                                                                                                     //taka se dobavq broqch
    }
}

