#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char op;
    double n1,n2;
    printf("Vuvedete stoinost za n1:\n");
    scanf("%lf", &n1);                                    //s %lf e za double ili longbouble kato float e ama ima poveche bytevo
    printf("Vuvedete stoinost za n2:\n");
    scanf("%lf", &n2);
    printf("Izberete simvol za operaciq:+,-,*,/\n");
    scanf(" %c", &op);                                      //trqbva da se sloji interval pri c zashtoto inache bufera mi go izqjda i go chisti i vse edno sum go natisnal ot predishno natiskane otava i zatova se salga interval
    switch(op) {
        case '+':
        printf("Subirane: %lf + %lf = %.2lf",n1,n2,n1+n2);
        break;
        case '-':
        printf("Izvajdane: %lf - %lf = %.2lf",n1,n2,n1-n2);
        break;
        case '*':
        printf("Umnojenie: %lf * %lf = %.2lf", n1,n2,n1*n2);
        break;
        case '/':
          if(n2!=0) {
            printf("Delenie: %lf / %lf = %.2lf",n1,n2,n1/n2);

          } else {
            printf("Nesedelina nula");
          }
        break;
        default:
        printf("Nqma takava operaciq");
    }
    return 0;
}