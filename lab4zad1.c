#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int input,sum;
    sum=0;
    printf("Enter a value:\n");
    scanf("%d", &input);
    while(1) {                                                     //Tova e kato true
        if(input==-999) {
            break;

        } else {
        sum+=input;
        printf("Enter a value:\n");
        scanf("%d", &input);
         printf("The sum is: %d\n", sum);                              //tova se pravi kato trqbva da izkarame stoinist %d
        }
       
    }
           
    return 0;
}