#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 4
#define STEP 5

char *M[SIZE]={
    "1-Vuvejdane",
    "2-Izvejdane",
    "3-Sortirane",
    "4-Izod",
    "5-Suma v obraten red",
};

int *input(int *br,int*mas);
void out(int br,int*mas);
void sort(int br,int *mas);
int reversesum(int br,int *mas);

int main() {
    int cod,n=0,*p=NULL,flag=0;
    do {                                                                  

    for(int i=0;i<SIZE;i++) {

       puts(M[i]); 
        printf("Izberete cod:\n");                                                                     //funciq za vkarvane na elementi v masiv
        scanf("%d", &cod);

    }
        switch (cod) {
            case 1:
            p=input(&n,p);
            flag=1;
            break;

            case 2:
            if(flag==1) {                                                                  //flaga e edno samo ako e vuvedeno neshto
                out(n,p);

            } else {
                printf("Izberete purvo 1!\n");
            }
            _getch();
            break;;

            case 3:
            if(flag==1) {
                printf("Nachalen masiv:\n");
                out(n,p);
                sort(n,p);
            } else {
                printf("Izberete purvo 1!\n");

            }
            _getch();
            break;

            case 4:
           if(flag==1) {
            printf("Nachalen masiv:\n");
            out(n,p);
            reversesum(n,p);
           } else {
            printf("Izberete 1!:\n");
           }
           _getch();
           break;

           case 5:
           if(p != NULL) {
            free(p);
            printf("Osvobojdavanena pametta!\n");
            p=NULL;
           }
           exit(1);
           break;

           default:
           printf("nekorekten code!");
           _getch();
        } 
        system("cls");
        }while(1);
    
        return 0;
}

int *input(int *br, int *mas) {
    int n=5,i=0, *p1=NULL;
    mas=(int*)calloc(n,sizeof(int));                                                                   //nulira baitovete svurzani s int,toest baitovete na int
    if(mas==NULL) {
        printf("Nqma pamet!");
        exit(1);

    }
    printf("Vuvejdane na masiv.Natisnete 0 za krai!\n");

    do {

        if(i<n) {
            printf("[%d]=",i);
            scanf("%d", (mas+i));
            i++;
        } else {
            n=n+STEP;
            p1=(int*)realloc(mas,n*sizeof(int));

            if(p1==NULL) {
                printf("Nqma pamet!");
                exit(1);
            } else {
                mas=p1;
                p1=NULL;
            }
            printf("[%d]=",i);
            scanf("%d", (mas+i));
            i++;
        }
    } while(*(mas +(i-1))!=0);                                                                                  //i tuka mas[i-1] = *(mas + (i-1)), sushtoto e
    
    n=i-1;

    *br=n;

    return mas;

}

void out(int br, int *mas) {
    int i;

    for(i=0;i<br;i++) {
        printf("[%d]=%d\n",i,*(mas+i));
    }
}

void sort(int br, int *mas) {
    int i,j;
    float x;

    for(i=1;i<br;i++) {
        x=*(mas+i);                                                           //*(mas+i) e sustoto kato mas[i]
        for(j=i;j>=0;j--) {
            if(x<*(mas+j)) {
                *(mas+j+1)=*(mas+j);
            } else {
                break;
            }
        }
        *(mas+j+1)=x;
    }
    printf("Sortiran masiv: \n");
    out(br, mas);
}

int reversesum(int br,int *mas) {
    int sum=0;
    int x;
    for(int i=br-1;i>=0;i--) {                                                         //i = br-i i ie>=0 shtoto ao e i<br i i i-- se poluchava bezkraen cikul
        x=*(mas+i);
        sum+=x;
    }
    printf("Sum:%d", sum);
}