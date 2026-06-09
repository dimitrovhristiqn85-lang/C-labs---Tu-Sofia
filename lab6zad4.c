#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int *a,int*b, int *c);
int max(int *a, int*b, int*c);
int min(int *a, int *b, int*c);
int crd(int *a, int*b, int*c);

int main() {
    int number1;
    int number2;
    int number3;
    int suma;
    int maximum;
    int minimum;
    int crednoarm;

    for(int i=0;i<=3;i++) {

        printf("chislo 1:%d\n", i);
        scanf("%d", &number1);
        printf("chislo 2: %d\n", i);
        scanf("%d", &number2);
        printf("chislo 3: %d\n", i);
        scanf("%d", &number3);
    

    suma = sum(&number1, &number2, &number3);                         //tova se pravi kato v funciite rabotim s adrsi slaga se &
    printf("sumata na dvete chisla e: %d\n", suma);

    maximum = max(&number1, &number2, &number3);
    printf("Nai - golqmoto ot trite chisla e: %d\n", maximum);

    minimum = min(&number1, &number2, &number3);
    printf("Nai - malkoto ot trite chisla e: %d\n", minimum);

    crednoarm = crd(&number1, &number2, &number3);
    printf("Srednoa ritmetichno ot trite chisla e: %d\n", crednoarm);
    }                                                                                                                    //taka smqta za vsqko ot trite chsilo za vseki put
    return 0;
}

int sum(int *a, int *b, int*c) {
    int s;
    s = *a + *b + *c;
    return s;
}

int max(int *a, int*b, int*c) {
    int m = *a;                     //po tozi nachin porivame ako imame ravni stoinosti na parametrite

    if (*b>m)
    {
       m=*b;
    }
    if(*c>m) {
        m=*c;
    }
    return m;
    
}

int min(int *a, int *b, int*c) {
    int m = *a;                  //taka priemma che a e nai malka v toq sluchai(v gornata e nai golqma) i ako sa ravni vsichkite shte izkara prosto a lesni pesno

    if(*b<m) {                    //taka proverqva koq e po malkata i taka             
        m=*b;
    }
    if(*c<m) {
        m=*c;
    }
    return m;
}

int crd(int *a, int *b, int *c) {
    int s;
    s=(*a + *b + *c)/3;                                                                                                           //sredno aritmeticho e deleno na broq im
    return s;
}