#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int sum=0;
    int a;
   
    for(int i=0;i<5;i++) {                                     //slagai nachalna stoinost na i za da znae programata koga da spre, sega shte za 5 chsila,pri i<5, inache pi <=5 sa 6 chisla drugia variant e i=1,i<=5 i tgava sa 5 chisla inache ot nula broi do 5 vkluchitelno i sa 6 chisla
        printf("Vuvedete chislo: %d:\n", i);
        scanf("%d", &a);                                        //a trqbva da se vuvede v cikula inache che vurti edno i suhto chslo 5 puti sega vseki put v cikula shte se vuvejda a i nqma da e edno i suhto chisl
        if(a%2==0) {
            sum+=a;                                               
        
        } else {
            printf("Ne e vuvedeno chetno chislo, probvai pak");
            continue;
        }

    }
    printf("Sumata ot chetnite chisla e : %d\n", sum);
    return 0;
}