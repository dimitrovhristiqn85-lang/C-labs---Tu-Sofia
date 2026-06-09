#include "lab7zad2header.h"

FILE*input(FILE*f1) {
    int i;
    Point P;
    printf("Vuvedete koordinati za 5 tochki:\n");
    for(i=0;i<5;i++) {

        printf("x=");
        scanf("%d", &P.x);
        printf("y=");
        scanf("%d", &P.y);
        fwrite(&P, sizeof(P),1,f1);

    }
    fclose(f1);
    return f1;
}

void positiv(FILE*f1) {
    int i,flag=0;
    Point P;
    for(i=0;i<5;i++) {
        fread(&P, sizeof(P),1,f1);
        if((P.x>0) && (P.y>0)) {
            printf("x=%d", P.x);
            printf("y=%d", P.y);
            printf("\n");
            flag=1;
        }
    }
    if(flag==0) {
        printf("Nqma tochki s dve polojitelni koordinati!\n");

    }
    fclose(f1);

}

void negativ(FILE *f1) {
    int i,flag=0;
    Point P;
    for(i=0;i<5;i++) {
        fread(&P, sizeof(P),1,f1);
        if((P.x<0) && (P.y<0)) {
            printf("x=%d", P.x);
            printf("y=%d", P.y);
            flag = 1;
        }
    }
    if(flag==0) {
        printf("Nqma tochki s dve polojitelno koordinati");

    }
    fclose(f1);
}

void poedno(FILE *f1) {
    int i,flag=0;
    Point P;
    for(i=0;i<5;i++) {
        fread(&P,sizeof(P),1,f1);
       if((P.x > 0 && P.y < 0) || (P.x < 0 && P.y > 0))  {
            printf("x=%d", P.x);
            printf("y=%d", P.y);
            flag = 1;
        }

    }
    if(flag==0) {
        printf("Nqma polojitelen ili otricatelen koordinat");

    }
    fclose(f1);
}