#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int a, int b);
int main(){
int total;
total = sum(5,6);
printf("The sum is: %d\n", total);
return 0;
}
int sum(int a, int b) {
    int s;
    s=a+b;
    return s;              //tova trbva da se vrushta
}
