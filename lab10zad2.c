#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Vuvejdane na niz:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i=0;str[i] != '\0'; i++ ) {                                                                        //s "" e za niz a sa simvol e '' a tuk e simvol shtot ralejdame a[i]                                                                                                   //tova e zaduljitelno ovormqne pri nizove
        if(isupper(str[i])) {                                                                                    //proverqva dali za glavni bukvi
            str[i] = tolower(str[i]);
        }
        if(islower(str[i])) {                                                                                           //proverqva dali sa malki bukvi
            str[i] = toupper(str[i]);
        }
    }
    printf("Rezultata e :%s", str);
    return 0;
}