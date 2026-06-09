#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

FILE *writeFile(char *fname);
void readFile(FILE *fp,char *fname);
int prebroi(FILE *fp, char *fname);

int main() {
    FILE *text;
    char fname[20];
    printf("Vavedete ime za faila s rashirenie txt:\n");
    scanf("%s", fname);
    text = writeFile(fname);
    if(text == NULL) {
        printf("Failut ne moje da bude otvoren!");
        return 0;
    }
    readFile(text, fname);
    prebroi(text, fname);
    return 0;
}

FILE *writeFile(char *fname) {
    FILE *fp;
    char s[81];
    fp = fopen(fname, "w"); 
    if (!fp) exit(1);
    
    printf("Vuvedete tekst (Ctrl+Z za krai):\n");
    
    while (fgets(s, 80, stdin) != NULL) 
        fputs(s, fp); 
        
    fclose(fp);
    return fp;
}

void readFile(FILE *fp, char *fname) {
    char s[81];
    fp = fopen(fname, "r"); 
    if (!fp) exit(1);
    
   
    while (fgets(s, 80, fp) != NULL) 
        fputs(s, stdout); 
        
    fclose(fp);
}

int prebroi(FILE *fp, char *fname) {
    char s[81];
    int x=0;
fp=fopen(fname, "r");
if(!fp) exit(1);
while (fgets(s, 80, fp) != NULL){
    if(s[0] == '\n') {                                                           //'\n' tova vinagi se pishe s takiva kavichki                                                                //proverka za prazni redove
        x++;

    }

}
printf("Broq na prasnite redove e : %d", x);

}
