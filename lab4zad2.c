#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void sort(int array1[MAX], int left, int right);

int main() {
    int array1[MAX];
    int num;

    printf("Vuvedete chislo v interval ot edno do 20 za golemina na masiva\n");
    scanf("%d", &num);

    if (num < 1 || num > 20) {
        printf("Ne e v posocheniq interval");
        return 1;
    }

    for (int i = 0; i < num; i++) {
        printf("Vuvedte chislo: %d\n", i);
        scanf("%d", &array1[i]);
    }

    sort(array1, 0, num - 1);

    for (int i = 0; i < num; i++) {
        printf("%d ", array1[i]);
    }
    return 0;
}

void sort(int array1[MAX], int left, int right) {
    int i, j, pom;
    float x;
    i = left;
    j = right;
    x = array1[(left + right) / 2];

    do {
        while (array1[i] < x) i++;
        while (array1[j] > x) j--;
        if (i <= j) {
            pom = array1[i];
            array1[i] = array1[j];
            array1[j] = pom;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j) sort(array1, left, j);
    if (i < right) sort(array1, i, right);
}                                                                           //pri while se pishe ; nakraq                                                                                     //while zavurshva s ; samo pri do while cikula
    