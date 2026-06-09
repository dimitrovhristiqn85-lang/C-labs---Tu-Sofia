#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int i,n;
    float factorial;
    printf("Vuvedete chislo:");
    scanf("%d", &n);
    if(n==0) {
        factorial = 1;
    } else {
        for(factorial=1,i=2;i<=n;i++) {                         //tuk kato izrejdam promenlivi v nachaloto e s , ne s;
            factorial*=i;                                    //vsqko sledvashto ot cikula se umnojava s i
        }
    }
    printf("Faktorial: %d!=%f\n",n,factorial);                     //Shte izpishe n chisloto ravno na factoriael chisloto
    return 0;
}