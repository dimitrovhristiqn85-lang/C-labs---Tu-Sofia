#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 

float power_iterative(float* a, int* b);
float power_recursive(float* a, int* b);

int main() {
    float r;
    int c;

    printf("Osnova (realno): ");
    scanf("%f", &r);
    printf("Stepen (cqlo neotricatelno): ");
    scanf("%d", &c);

    if (c < 0) {
        printf("Greshka: Stepenta trqbva da e neotricatelna!\n");
    } else {
        printf("Iterativno (math.h): %f\n", power_iterative(&r, &c));
        printf("Rekursivno: %f\n", power_recursive(&r, &c));
    }

    return 0;
}


float power_iterative(float* a, int* b) {
    
    return pow(*a, *b);
}

float power_recursive(float* a, int* b) {
    float osnova = *a;
    int stepen = *b;

   
    if (stepen == 0) {
        return 1.0;
    }

    
    int next_stepen = stepen - 1;
    return osnova * power_recursive(&osnova, &next_stepen);                                                 //izpolzvame relursiq
}