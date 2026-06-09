#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int input=1;
    int input2=1;                                           //Slaga se edno za da moje da e true inache kato veche e 0 cikula shte spira i nqma da raboti zatova predvaritelno slagam 1
    int flag;
    int flag2;
    int srd=0;
    while (input>0 && input2>0) {
        
        printf("vuvedi chislo: \n");
        flag=scanf("%d", &input);
        printf("Vuvedi vtoro chislo:");
        flag2=scanf("%d", &input2);
        if(1==flag && 1==flag2) {                                      //1 e kato true demek dali e stanala rabotata
            srd = (input + input2)/2;                                  //bez += zashtoto s += se prezapisva promenlivata a tova ne e nashata chel bez tezi znachi sveki put shte e otnachalo
            printf("Resultat:%d\n", srd);
        }
    }
    
    return 0;
}