#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    float beg, end;
    float a,m;

    printf("Vuvedi purvo chislo za interval\n");
    scanf("%f",&beg);
    printf("Vuvedi vtori interval\n");                      //zamo na printf se slaga \n ne na scanf!!!
    scanf("%f", &end);


    if(!(beg<end)) {
        printf("Trqbva purviq interval da e po malkul ot vtoriq\n");
        return 1;                                                 //tova se pravi zashtoto e fatalna  greshka i  spira progrmata,tova e pri 1, dokato pri 0 e kato e succsesful i ne se spira vedbnaga
    } 

   printf("Vuvedi chislo:\n");
   scanf("%f", &a);

    printf("Vuvedi vtoro chislo\n");
    scanf("%f", &m);

    float x;

    printf("Vuvedi stonost za x:\n");
    scanf("%f", &x);
    
    float b;

    printf("Vuvedi chislo za b\n");
    scanf("%f", &b);
    for(float i=beg;i<=end;i++) {
        printf("Stupka\n", i);                                                //trqbbva da e taka zaredi for

        if(x==0) {
            printf("Trqvabva x da e razlichno ot 0\n");
            continue;                                                       //slaga se continue samov cikul i zatova imameif v cikula            
        } 

        if(x<=m) {
            float t=b+x;
            printf("Sbora na dvete chisla e: %f\n", t);
            break;

        }
        if(x>m) {
            float g=a*x/4-x;
            printf("Deistvieto e: %f\n", g);                       //zashtoto nqma scanf za g
            break;
        }
    }
    return 0;
}