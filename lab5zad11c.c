#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char s1[100];
    char s2[100];
    int i;

    printf("vuvedete s1:\n");
    fgets(s1, sizeof(s1), stdin);

    printf("vuvedete s2:\n");
    fgets(s2, sizeof(s2), stdin);

    printf("Predi kopirane:\n");
    printf("s1=%s", s1);
    printf("s2=%s\n", s2);

    for(i=0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    printf("Sled kopirane:\n");
    printf("s1 = %s", s1);
    printf("s2 = %s\n", s2);
    return 0;
}