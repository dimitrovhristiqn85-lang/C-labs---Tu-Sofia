#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int*n);

int main() {
    int n;
    printf("Vuvedi chislo za factoriel\n");
    scanf("%d", &n);

   if(n == 0) {
    printf("Chisloto trqbva da e po golqmo ot 0\n");
   } else {
    printf("Factoriel ot chisloto e %d\n", factorial(&n));
   }
    return 0;
} 

int factorial(int*n) {
    int chislo;
    chislo=*n;

  if (chislo == 0) {                                                              //za proverka dali chisloto e cqlo
    return 1;                                                                       //tova se slaga za da raboti rekursiqta
   }
    int nex_chislo = chislo -1;
    return factorial(&nex_chislo)*chislo;                                                     //zashtoto taka izlvichame factoriela na chisloto ot factoriela minus edno tova e zadachata

   
}
