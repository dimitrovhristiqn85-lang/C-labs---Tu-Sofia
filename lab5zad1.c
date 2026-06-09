#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *p = NULL;
    int a;
    
    p = (int*)calloc(5, sizeof(int));

    printf("Enter number: \n");
    scanf("%d", &a);

    if (p == NULL) {
        printf("Error");
        return 1;
    }

    for (int i = 0; i <= a && i < 5; i++) {
        printf("element %d = \n", i, *(p + i));
    }

    printf("Vie vuvedohte\n");
    for (int i = 0; i < 5; i++) {
        printf("element: %d=%d\n", i, *(p + i));
    }

    printf("Razmer na bloka: %d bytes\n", 5 * (int)sizeof(int));

    if (p != NULL) {
        free(p);                                                     //promqna na razmera na zadelen block
        printf("\nPametta e svobodna");
        p = NULL;
    }

    return 0;
}

   
    

