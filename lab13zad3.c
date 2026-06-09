#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

FILE* writeFile(char *fname);
void readFile(char *fname);
int chisla(char *fname);

int main() {
    FILE *text;
    char fname[30];
    
    printf("Vuvedete ime za faila s razshirenie txt:\n");
    scanf("%s", fname);
    
    text = writeFile(fname);
    if (text == NULL) {
        printf("Failut ne moje da bude otvoren!");
        return 0;
    }
    
    readFile(fname);
    chisla(fname);
    
    return 0;
}

FILE* writeFile(char *fname) {
    FILE *fp;
    int a = 0;
    fp = fopen(fname, "w");
    if (!fp) return NULL;
    
    printf("Vuvejdane na celi chisla. Za krai: Ctrl+Z (ili bukva):\n");
    while (scanf("%d", &a) == 1) {
        fprintf(fp, "%d ", a);
    }
    
    fclose(fp);
    return fp;
}

void readFile(char *fname) {
    FILE *fp;
    int a = 0;
    fp = fopen(fname, "r");
    if (!fp) exit(1);
    
    printf("\nChislata vuv faila sa: ");
    while (fscanf(fp, "%d", &a) == 1) {
        printf("%d ", a);
    }
    
    fclose(fp);
    printf("\n");
}

int chisla(char *fname) {
    FILE *fp;
    int a = 0;
    int broqch = 0;
    
    fp = fopen(fname, "r");
    if (!fp) exit(1);
    
    printf("Izvejdane chrez funkciata chisla: ");
    while (fscanf(fp, "%d", &a) == 1) {
        printf("%d ", a);
        broqch++;
    }
    
    printf("\nObsht broi namereni chisla: %d\n", broqch);
    fclose(fp);
    return broqch;
}