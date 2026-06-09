#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int j=0;

    printf("Vuvedete simvoli: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i=0;str[i] != '\0'; i++) {                                                                   //tuk s vtororto se ima predvid dai str[i] ili tekushtiq simvol e terminurasht nula ili posledniq simvol
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
str[j] = '\0';                                                                                                        //za krai na noviq niz
printf("NIza e: %s", str);
return 0;
}