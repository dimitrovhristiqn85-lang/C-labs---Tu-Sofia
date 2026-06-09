#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 50                                                                          //maksimalniq vuzmojen broi elementi na masiva

int sum(int s[MAX]);                                                                                        //taka se pravi za da slojim massiv v funciqta
int chetni(int ch[MAX]);
int min(int m[MAX]);
int nchindex(int nch[MAX]);

int razmer;

int main() {                                                                                              //tova sthe go polzvame za razmer na masiva

    int array1[MAX];

    printf("Vuvede razmer na masiva:\n");
    scanf("%d", &razmer);

 if(razmer>0 && razmer<50) {

    for(int i=0;i<razmer;i++) {                                                                                    //tuk i igrae rolqta na broqch, sega sus i<razmer sus sigurnost razmera e 50 a ne 51, shtot sega e ot 0 go 49 vkluchitelno
 
        printf("Vuvedete elementi na masiva,minimum 0 elementa, maksimum do 50 elementa: %d\n", i);
        scanf("%d", &array1[i]);                                                                               //i se slaga sa da znae masiva broikta na chislata koqto vkarva

    }
    } else {
        printf("trqbva da otgovarq na posocheniq interval\n");
        return 1;
    }
    
    sum(array1);
    chetni(array1);
    min(array1);
    nchindex(array1);                                                                                                       //bez [MAX], zashtoto po tozi nachin vzima v tozi sluchai chisloto koeto stoi n maksimalnata poziciq i go prashta v funciqta

    return 0;
}

int sum(int s[MAX]) {
    int suma=0;

   for(int i=10;i<razmer;i++) {                                                                             //s for moje da se sadade rabota samo v konkretni intervali, taka se zadava da pochva ot 10 ta posiciq qvno
    suma+=s[i];
   }

    printf("Sumata na chislata v intervala ot 10 do 50: %d\n", suma);
    return suma;
}

int chetni(int ch[MAX]) {

    int chetno=0;

    for(int i = 0;i<razmer;i++) {                                                                           //bachkame s for cikuli
    if(ch[i] %2==0) {
        chetno++;                                                                                           //tova e broqch,po tozi nachin se pravi broqch i s nego se broi broq na chetnite uvelichavaiki se s po edno
    }
}
    printf("Broqt na chetnite chisla e: %d\n", chetno);
    return chetno;
}

int min(int m[MAX]) {
    int minchislo = m[0];
    
    for(int i=1;i<razmer;i++) {

        if(m[i]<minchislo) {
            minchislo = m[i];                                                          //po ozi nachin se turci minimalno chislo
        }

    }
    printf("Minimalnoto chislo e:%d\n", minchislo);
    return minchislo;

}

int nchindex(int nch[MAX])
{
    int nechentni=0;                                                                                         //sega znachi necehtni chisla iindexi e edno i suhto neshto shtoto chislata realno sedqt na mestata na indexi so,a i e hubavo da se nulira

    for(int i = 0; i<razmer;i++) {

        if(nch[i] %2!=0) {                                                                                   //ako ne e chetno na dve se pechati
            nechentni++;
        }
        
       
    }
     
    printf("Broqt na nechetnite chisla e: %d\n", nechentni);
    return nechentni;
}                                                                                    

