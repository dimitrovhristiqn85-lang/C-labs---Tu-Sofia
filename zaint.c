#include <stdio.h>

int findmissing(int mass[], int size, int n);

int main() {
    int mymun[] = {1,2,4,5};
    int size = 4;
    int n = 5;
    int miss = findmissing(mymun ,size, n);
    printf("Lipsva:%d\n", miss);
}

int findmissing(int mass[], int size, int n) {
    int excpectedsum=n*(n+1)/2;
    int realsum = 0;
    for(int i=0;i<size;i++) {
        realsum+=mass[i];
    }
    return excpectedsum - realsum;
}