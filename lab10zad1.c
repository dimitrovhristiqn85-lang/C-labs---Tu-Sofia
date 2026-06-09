#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch1, ch2;
    int i, ctr1 = 0, ctr2 = 0;

    printf("Vuvedete string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Vuvedete purvi simvol: ");
    scanf("%c", &ch1);
    
    while(getchar() != '\n');

    printf("Vuvedete vtori simvol: ");
    scanf("%c", &ch2);

    for(i = 0; str[i] != '\0'; i++) {
        if(ch1 == str[i]) {
            ctr1++;
        }
        if(ch2 == str[i]) {
            ctr2++;
        }
    }

    printf("Simvol %c se sreshta: %d pati\n", ch1, ctr1);
    printf("Simvol %c se sreshta: %d pati\n", ch2, ctr2);

    if(ctr1 > ctr2) {
        printf("Simvol '%c' e s po-golqma chestota.\n", ch1);
    } else if(ctr2 > ctr1) {
        printf("Simvol '%c' e s po-golqma chestota.\n", ch2);
    } else {
        printf("Dvata simvola se sreshtat ednakuv broi pati.\n");
    }

    return 0;
}