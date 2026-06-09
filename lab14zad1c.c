#include "lab14zad1a.h"
extern float data[N];

void input(int num) {
    int i;
    for(i=0;i<num;i++) {
        printf("data[%d]=", i+1);
        scanf(" %f",&data[i]);
    }
}

void output(int num) {
    int i;
    for(i=0;i<num;i++) {
        printf("data[%d]=%.3f\n",i+1,data[i]);
    }
}

float sum(int num) {
    int i;
    float s=0.0;
    for(i=0;i<num;i++) 
        s=s+data[i];
    return (s);
}

float srdsum(int sum) {
    int i;
    float s= 0.0;
    for(i=0;i<sum;i++) {
        s = s + data[i];
    }

    if(sum>0) {
        return s/sum;
    } else {
        return 0.0;
    }
}