#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int input=0;
    int sum=0;
    int delisena5 = 0;
    int pomalkootnulal=0;                            //pravq tri promenlivi z da e razdelna programata i da ne se oplita
    for(int num=0;num<=5;num++) {                 //s num samo shte se povtarq cikula nqma da q olvame za zapazvane na stoinosti
        printf("Enter value:%d\n", num);
        scanf("%d", &input);                       //tuk shte se zapazvat napisanite stoinosti
        if(input==0) {
            break;
        }
        if (input<0 && input %5==0) {

            sum+=input;
            printf("Sumata na chislata po malki ot nula i kratni na 5%d\n", sum);
        } 
        
        if(input<0) {
            pomalkootnulal+=input;
            printf("Tuk se subirat otricatelnite stoinosti: %d\n", pomalkootnulal);
        } 
        if(input %5==0) {
            delisena5+=input;                                                 //za vsqko da ima po otdelna promenliva da se zapisva input za da ne stane da se povtarq i greshki
            printf("Sumata na  chislata kratni na 5: %d\n", delisena5);
                                                                                        // izatrih continue zahtoto toi prekusva tekushtata interakciq i vrushta cikula ot nachalo

         }
        }
    return 0;

}