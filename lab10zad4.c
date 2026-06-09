#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int lenght(char *s);

int main() {
    char str[100], target;
    int j = 0;

    printf("Vuvedete niz: ");
    gets(str);

    printf("Dyljinata e: %d\n", lenght(str));

    printf("Vuvedete simvol za iztrivane: ");
    scanf("%c", &target);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != target) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("Rezultat: %s\n", str);
    return 0;
}

int lenght(char *s) {
    int n = 0;
    while (*s != '\0') {
        n++;
        s++;
    }
    return n;
}