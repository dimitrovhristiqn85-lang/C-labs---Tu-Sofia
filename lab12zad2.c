#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 20

typedef struct {
    char ime[30];
    long fnum;
    int grup;
    float ocenka;
} STD;

void my_line_flush();
STD* inputStd(int b,STD *s); 
void outputStd(int b,STD *s); 
void uspeh(int b,STD *s); 
void spisuk(int b,STD*s);
int main()
{

 int i,num=0,sum=0;
 STD *s;
 printf("Vedete broi studenti:");
 scanf("%d",&num);
 s=(STD*)malloc(num*sizeof(STD));

 if (s==NULL)
 {

 printf("ERROR!\n");
 exit(1);

 }
 s=inputStd(num,s);
 printf("\nSpisak na studenti:\n");
 outputStd(num,s);
 uspeh(num,s);
 spisuk(num, s);
 return 0;
}

void my_line_flush() {
    int ch;
    while ((ch=getchar()) != '\n' && ch != EOF);
}

STD*inputStd(int b, STD*s) {
    for(int i=0;i<b;i++) {
        printf("Ime: ");
        my_line_flush();
        gets((s+i)->ime);                                                                         //s -. i . se osushtestvqva dostup do elementite na structurata
        printf("Nomer: ");
        scanf("%ld", &(s+i)->fnum);
        printf("Grupa:");
        scanf("%d", &(s+i)->grup);              
        printf("Ocenka: ");
        scanf("%f", &(s+i)->ocenka);
       
    }
    return s;
} 

void outputStd(int b, STD*s) {
    for(int i=0;i<b;i++) {
        printf("Ime:%s", (s+i)->ime);                                                          //o+0=0-lev element i ti pokazva elementa tam, a inache v () na fuc tova si e ukazatel koito polzvame take e s izpolzvaneto na ->
        printf("\nNomer:%ld\n", (s+i)->fnum);
        printf("Ocenka: %.2f\n", (s+i)->ocenka);
        
    }
}

void uspeh(int b,STD *s) {
    float sum=0.0;
    int gr=0,key;
    printf("Vuvedete nomera na grupa: ");
    scanf("%d", &key);
    for(int i=0;i<b;i++) 
    if((s+i)->grup==key) {
        sum+=(s+i)->ocenka;
        gr++;
        
    }
    if(gr>0)  {
    printf("Sreden uspeh na studenti ot %d grupa: %.2f\n",key,sum/gr);
    
    }else { 
    printf("Nqma ot studenti ot grupa %d!\n", key);
    }
}

void spisuk(int b, STD*s) {
    int gr=0,key;
    printf("Vuvedete grupa:");
    scanf("%d", &key);
    for(int i=0;i<b;i++) {
        if((s+i)->grup==key) {
            printf("Uchenicite ot gurpa:%s \n", (s+i)->ime);                                                           //tuk dostup do elemnta e (s+i)-> a v pretishto beshe s[i].imenaneshto, a suhsto nukud ne e pisalo nesto za *(s+i) nqma takova tuk,%s e shtot izkarvam imena a te sa string
            gr++;
        }
    }
}

