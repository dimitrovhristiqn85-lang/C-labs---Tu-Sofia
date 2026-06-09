#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(float a[100], int n);
void output(float a[100], int n);
void sort(float a[100], int n);

int main() {

    int n;
    float a[100];
    printf("razmer:\n");
    scanf("%d", &n);
    input(a,n);
    sort(a,n);
    output(a, n);
    return 0;

}

void input(float a[100], int n) {
    int i;

    for(i=0;i<n;i++) {                                                                     //ako ne e i++ se suzdava bezkraen cikul
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }
}

void output(float a[100], int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("a[%d]=%.2f\t",i,a[i]);
    }
}

void sort(float a[100], int n) {

    int i,j;
    float x;
    
    for(i=0;i<n-1;i++) {                                                                                //tuk ne slagame i-- za da ne stane bezkraen cikul
        for(j=n-1;j>i;j--) {
            if(a[j]>a[j-1]) {                                                                            //tova  e obshto zeto za da e ot nai golqm kum nai maluk za obratnoto razmenqme zanka >
                x=a[j];
                a[j]=a[j-1];
                a[j-1]=x;
            }
        }
    }
}