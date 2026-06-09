#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 7

char *M[SIZE] = {
    "1-Vuvejdane",
    "2-Izvejdane",
    "3-Suma",
    "4-MAX",
    "5-MIN",
    "6-Suma na chetni chisla",
    "7-Izvod"
};

int* input(int *br, int *mas);
void out(int br, int *mas);
int sum(int br, int *mas);
int sumchetni(int br, int *mas);
int max(int br, int *mas);
int min(int br, int *mas);

int main() {
    int cod, n = 0, *p = NULL, flag = 0;

    do {
        system("cls");
        for (int i = 0; i < SIZE; i++) {
            printf("%s\n", M[i]);
        }
        
        printf("\nIzberete kod: ");
        if (scanf("%d", &cod) != 1) break;

        switch (cod) {
            case 1:
                p = input(&n, p);
                flag = 1;
                break;
            case 2:
                if (flag == 1) out(n, p);
                else printf("Izberete purvo 1!\n");
                _getch();
                break;
            case 3:
                if (flag == 1) printf("Sum = %d\n", sum(n, p));
                else printf("Izberete purvo 1!\n");
                _getch();
                break;
            case 4:
                if (flag == 1) printf("Max = %d\n", max(n, p));
                else printf("Izberete purvo 1!\n");
                _getch();
                break;
            case 5:
                if (flag == 1) printf("Min = %d\n", min(n, p));
                else printf("Izberete purvo 1!\n");
                _getch();
                break;
            case 6:
                if (flag == 1) printf("Suma chetni = %d\n", sumchetni(n, p));
                else printf("Izberete purvo 1!\n");
                _getch();
                break;
            case 7:
                if (p != NULL) {
                    free(p);
                    printf("Pametta e osvobodena!\n");
                }
                exit(0);
            default:
                printf("Nekorekten kod!\n");
                _getch();
        }
    } while (1);

    return 0;
}

int* input(int *br, int *mas) {
    int k = 0;
    if (mas != NULL) free(mas);
    printf("Vuvedete razmer: ");
    scanf("%d", &k);
    mas = (int*)malloc(k * sizeof(int));
    if (mas == NULL) {
        printf("Nqma pamet!\n");
        exit(1);
    }
    for (int i = 0; i < k; i++) {
        printf("mas[%d] = ", i);
        scanf("%d", &mas[i]);
    }
    *br = k;
    return mas;
}

void out(int br, int *mas) {
    for (int i = 0; i < br; i++) {
        printf("[%d] = %d\n", i, mas[i]);
    }
}

int sum(int br, int *mas) {
    int s = 0;
    for (int i = 0; i < br; i++) s += mas[i];
    return s;
}

int sumchetni(int br, int *mas) {
    int s = 0;
    for (int i = 0; i < br; i++) {
        if (mas[i] % 2 == 0) s += mas[i];
    }
    return s;
}

int max(int br, int *mas) {
    int m = mas[0];
    for (int i = 1; i < br; i++) {
        if (mas[i] > m) m = mas[i];
    }
    return m;
}

int min(int br, int *mas) {
    int m = mas[0];
    for (int i = 1; i < br; i++) {
        if (mas[i] < m) m = mas[i];
    }
    return m;
}



