#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[5][50], temp[50];
    printf("Vavedete 5 dumi: ");

    for(int i=0;i<5;i++) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    for(int i=0;i<5;++i) {
        for(int j= i + 1;j<5;++j) {
            if (strcmp(str[i], str[j]) > 0)
            {
              strcpy(temp, str[i]);
              strcpy(str[i], str[j]);
              strcpy(str[j], temp);
            }
            
        }
    }

    printf("\nPodredeni dumi:\n");
    for(int i=0;i<5;i++) {
        fputs(str[i], stdout);
    }

    printf("\nDuljina na dumite:\n");
    for(int i=0;i<5;i++) {
        printf("Duam %d ima duljina: %zu\n",(int)i, strlen(str[i]));                                                                                 //strlen kato sizeof ne moje da pokaje resultata bez pritnf, tq samo izchislqva ne pokazava i pak e s zu, taka sa izchislitelnite funkcii s zu
    }
    return 0;
}