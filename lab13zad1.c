

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Прототипи на функциите
FILE* writeFile(char *fname);
int readFile(char *fname);
void razmqna(char *fname);

int main() {
    FILE *text;
    int symbols = 0;
    char *fname = "Text.txt";

    text = writeFile(fname); //otvarqne na faila
    if (text == NULL) {
        printf("failut ne moje da bude otvoren");
        return 0;
    }

    symbols = readFile(fname);

    if (symbols >= 0)
        printf("\nbroisimvoli%d\n", symbols);
    else
        printf("Failut ne moje da bude otvore!\n");

    razmqna(fname); //izvikvane na razmqnata

    return 0;
}

FILE* writeFile(char *fname) {
    FILE *fp = fopen(fname, "w");
    int ch;
    if (!fp) return NULL;
    printf("Vuvedete simvoli.Za krai vuvedete: # + Enter.\n");
    while ((ch = getchar()) != '#') 
        fputc(ch, fp);
    fclose(fp);
    return fp;
}

int readFile(char *fname) {
    FILE *fp = fopen(fname, "r");
    int ch, n = 0;
    if (!fp) return -1;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
        n++;
    }
    fclose(fp);                                                                                                                     //tuk se zatvarq failoviq ukazatel
    return n;
}

void razmqna(char *fname) {
    FILE *fp = fopen(fname, "r+");                                                                                                  //r+ za da mojem da pishem vutre
    int ch;
    long pos;
    if (!fp) return;
    
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ',' || ch == '.' || ch == '!' || ch == '?') {
            pos = ftell(fp);
            fseek(fp, pos - 1, SEEK_SET);                                                                                                  //vrushtane nazade
            fputc('x', fp);                                                                                                              //smqna s x
            fseek(fp, 0, SEEK_CUR);                                                                                                  //zapisvane na nov simvol
        }
    }
    fclose(fp);
}