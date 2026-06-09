#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

    int i,*p,*p1=NULL;
    int a;
    printf("Enter number for dynamic block");
    scanf("%d", &a);
    p=(int*)calloc(a, sizeof(int));                         //zadelqne na block s nulirane, malloc e zadelq na blick bez inicializaciq
    
    printf("Nacahlen block:\n");
    for (int i = 0; i < a; i++)
    {
        printf("element %d = %d", i, *(p+i));
    }
    printf("Razmer na blocka: %d bytes,nachalen address %d \n", a*sizeof(int), p);

    printf("Vie vudehte v block:\n");
    for(int i = 0; i < a; i++)
    {
        printf("Element: %d = %d\n", i,*(p+i));

    }
     int b;
    printf("Enter value: ");
    scanf("%d", &b);
    p1=(int*)realloc(p,b*sizeof(int));                          //osvobojdavane na zadelen block
    
 if (p1 == NULL) {
        printf("Error");
        return 1;
    } else {
        p = p1; 
    }
    
  
    printf("Nachalno sudurjanie na Nov Block: \n");
    for (int i = 0; i < b; i++)
    {
        printf("element %d = %d", i, *(p+i));
    }

    printf("Razmer na blocka: %d bytes, nachalen address %d\n", b*sizeof(int), p);
    printf("Vuvedete chislo: \n");
    for (int i = 0; i < b; i++)
    {
        printf("Element: %d = ", i);
        scanf("%d", (p+i));
    }
    printf("Vie vuvedohte nov block\n");
    if(p!=NULL) {
        free(p);                                   //za promenqne na razera na zadelen block
        printf("Pametta e osvobodena\n");
        p = NULL;
    }
    return 0;
    
    

}