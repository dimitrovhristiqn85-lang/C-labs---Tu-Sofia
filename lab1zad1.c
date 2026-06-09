#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a;
    float b;
    char f = 0;
    printf("Vuvedete simvol:\n");
    scanf("%c", &f);
    printf("Vuvedete relano cislo:\n");
    scanf("%f", &b);
    printf("Vuvedete cqlo chislo:\n");
    scanf("%d", &a);
    printf("Vuvedeni a:\n");
    printf("a=%d",a,"b=%f",b,"f=%c",f);
    printf("Osmichno chislo: a=%o\n",a);
    printf("Shesnaisetichno chislo: a = %X\n",a);
    printf("Pameta na cqloto cislo a e: %zu  bytes \n", sizeof(a));
    printf("Pameta na realnoto cislo b e : %zu bytes \n", sizeof(b));
    printf("Pameta na vuvedeniq simvol e : %zu\n bytes \n", sizeof(f));
    return 0;
}