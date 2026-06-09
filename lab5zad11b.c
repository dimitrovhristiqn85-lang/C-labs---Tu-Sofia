#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char s1[200]; 
    char s2[100];
    int lenght, j;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    printf("s1=%s\n", s1);
    printf("s2=%s\n", s2);

    lenght = 0;
    while (s1[lenght] != '\0') {
        ++lenght;
    }

    for (j = 0; s2[j] != '\0'; ++j, ++lenght) {
        s1[lenght] = s2[j];
    }

    s1[lenght] = '\0';
    printf("Sled dolepvane: ");
    puts(s1);

    return 0;
}