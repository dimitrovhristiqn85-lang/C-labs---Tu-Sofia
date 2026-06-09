#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a, b;
    printf("Enter first diapason");
    scanf("%d", &a);
    printf("Enter second diapason");
    scanf("%d", &b);
    int c,d;
    printf("Vuvedi purvo chislo:");
    scanf("%d", &c);
    scanf("%d", &d);
    int sum=c+d;
    for(int i=a;i<=b;i++){
      printf("%d,%d\n",i,sum);                                                     //dva puti d zashtoto imame dve stoinosti za i i sum
        

    }
    return 0;
} 