#include "lab14zad1a.h"
#include "lab14zad1b.h"

int main() {
    int br=0;
    float s;
    float as;
    do {
        printf("Vuvedete broi danni(max do 10):");
        scanf("%d", &br);
    } while((br>10) || (br<0));
    input(br);
    printf("Vie vuvedoshte slednite danni:\n");
    output(br);
    s=sum(br);
    printf("\nSuma:%.3f\n",s);
    as=srdsum(br);
    printf("\nSredno aritmetichno na chislata e %.3f\n", as);
    if(br>0) {
        printf("\nSredna stoinost:%.3f\n", s);
    } else {
        printf("Broqt na dannite e raven na nula!\n");
    }
    _getch();
    return 0;
}