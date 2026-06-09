#include "lab7zad2header.h"

int menu(char *t[]) {
    int k,i=1;
    int ch;

    printf("\n%s\n",t[0]);
    for(i;(t[i]);i++) {
        printf("\n<%d>-%s",i,t[i]);
    }
        printf("\n\nizberete: ");
        scanf("%d", &ch);
        return ch;
        
    
}