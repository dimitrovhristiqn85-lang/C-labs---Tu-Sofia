#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 20

typedef struct 
{
    char ime[30];
    long fnum;
    int grup;
    float ocenka;
} STD;                                                                                                                              //ime

void my_line_flush();
STD inputStd(void);                                                                                                              //func za vuvejdane
void outputStd(STD);                                                                                                                 //func za izvejadne
void uspeh(STD s[N], int br);
void otclichnik(STD s[N], int br);

int main() {
    int i,num=0,sum=0,code=0;
    STD s[N];

    do {
        printf("Vuvedet broi studeni(maksimum do: %d):", N);
        scanf("%d", &num);

    }while ((num>N)||(num<=0));
    printf("Vuvedete code:");
    scanf("%d", &code);
    
    switch(code){
        case 1:
        for(i=0;i<num;i++) {
            s[i] = inputStd();
            printf("\nSpisak na studenti\n");

        }
        break;
        case 2:
        for(i=0;i<num;i++) {                                                                                                    //!!!ciul bez {} se izpulnqva samo vednuj ne n na broi puti
            outputStd(s[i]);
        }
        uspeh(s, num);
        break;

        case 3:
        for(i=0;i<num;i++) {
            outputStd(s[i]);
        }
        otclichnik(s, num);
        break;

        default:
        printf("Nqma takuv kod");

    }
    return 0;
}

void my_line_flush() {
    int ch;
    while((ch=getchar()) != '\n' && ch != EOF);
}

STD inputStd(void) {
    STD a;
    printf("Ime: ");
    my_line_flush();
    gets(a.ime);
    printf("Nomer:");
    scanf("%ld",&a.fnum);
    printf("Grupa");
    scanf("%d", &a.grup);
    printf("Ocenka: ");
    scanf("%f", &a.ocenka);
    return(a);
}

void outputStd(STD a) {
    printf("Ime:%s", a.ime);
    printf("\nNomer:%ld\n",a.fnum);
    printf("Grupa:%d\n", a.grup);
    printf("Ocenka:%.2f\n", a.ocenka);
}

void uspeh(STD s[N], int br) {
    float sum=0.0;
    int gr=0,key;
    printf("Vuvedete nomera na grupa: ");
    scanf("%d", &key);
    for(int i=0;i<br;i++)                                                                                               //cikul za edno izpulnenie toest ne se povatrq a samo deistva
    if(s[i].grup==key) {
        sum+=s[i].ocenka;
        gr++;
    }
    if(gr>0)
    printf("Sreden uspeh na studenti ot %d grupa: %.2f\n",key,sum/gr);
    else
    printf("Nqma studenti ot grupa %d!\n",key);
}

void otclichnik(STD s[N], int br) {
    float pet=5.50;
    int gr=0;
    int key;
    printf("Vuvedete nmera na grupa:");
    scanf("%d", &key);
    for(int i=0;i<br;i++) 
    if(s[i].grup==key) {
        if(s[i].ocenka>=5.50) {
            printf("Otlichnik:%s, otcenka:%.2f", s[i].ime,s[i].ocenka);                                                    //taka shte ti izkara spisuka
            gr++;
        }
    }
} 
