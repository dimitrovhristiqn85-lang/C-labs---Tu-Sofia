#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char s[100];
    int i;

    fgets(s, sizeof(s), stdin);
    
    for(i=0; s[i] != '\0'; ++i);                                                                           //cikul bez tqlo
    printf("Lenght of the string: %d\n", i);
   
    return 0;
}


