#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    float input;
    int ctn, k;
    float min;
    int min_num;

    printf("Enter count:\n");
    scanf("%d", &ctn);

    printf("Enter value:");
    scanf("%f", &input);

    min = input;
    min_num=k=1;
    while (k<ctn)
    {
        printf("Enter value:\n");
        scanf("%f", &input);
        k++;
        if(input<min) {
            min=input;
            min_num=k;
        }
    }
    printf("Minimun: %.2f\n",min);
    printf("Min number is :%d\n", min_num);
    return 0;
    
}