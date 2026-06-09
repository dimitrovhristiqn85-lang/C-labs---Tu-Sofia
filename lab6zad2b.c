#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void change(int a);
int main() {
    int x;
    printf("x=");
    scanf("%d", &x);
    change(x);
    printf("change=%d\n",x);
    return 0;
}
void change(int a) {
    a+=2;                                                                                          //pri void funciite nqmame return 
}                                                                                                       //tuk se izkarva 4 zashtoto purvo se izvushva a i stava 6 no x se prezapisha na mqstoto na a i to samo kato samostoqtelna stoinost i a se iztriva shtoto nqma printf i na negovo mqto se izkarva vuedenata stoinost na x i go izkarva vse edno ne se e subralo shto ne rabotim s adresi a direkto s promenlivi