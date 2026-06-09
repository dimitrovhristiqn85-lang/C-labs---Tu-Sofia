#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    float a,b,c,d,root1,root2;

    printf("Vuvedete koeficienti: a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a==0 || b==0 || c==0) {
        printf("Tezi stoinosti ne sa podhodqshti za kvadratno uravnenie");
    } else {
        d=(b*b) - (4*a*c);
        if(d>0.00) {
            printf("Dva razlichni korena: \n");
            root1 = -b + sqrt(d)/(2.00*a);
            root2 = -b - sqrt(d)/(2.00*a);
            printf("Root1 is : %.2f, Root2 is : %.2f\n", root1, root2);

        } else {
            if(d<0.00) {
                printf("Kompleksi koreni\n");
                root1 = -b/(2.00*a);
                root2 = sqrt(abs(d)/(2.00*a));
                printf("Root1 is: %.2f + i%.2f\n", root1, root2);
                printf("Root2 is: %.2f - i%.2f\n",root1, root2);
            } else {                                                      //V C vsqko if moje da ima samo edno selse
                if(d==0) {
                    printf("Ravni koreni\n");
                    root1=root2=-b/(2.00*a);
                    printf("Root1=Root2=%.2f",root1,root2);
                }
            }
        } 
        }
        return 0;
    }
