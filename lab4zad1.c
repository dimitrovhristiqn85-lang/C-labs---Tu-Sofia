#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void sort(int a[MAX]);

int main() {
    int array1[MAX];
    int num;

    printf("Vuvedete broi elementi (do %d): ", MAX);
    scanf("%d", &num);

    if (num < 0 && num > MAX) {
        printf("Intervala ne e v neobhodimiq obhvat\n");
        return 1;
    }

    for(int i = 0; i < num; i++) {
        printf("Vuvedete chislo %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    for(int i = num; i < MAX; i++) {
        array1[i] = 999999; 
    }

    sort(array1);

    for(int i = 0; i < num; i++) {
        printf("%d ", array1[i]);
    }
    return 0;
}

void sort(int a[MAX]) {
    int min, pom;
    for(int i = 0; i < MAX - 1; i++) {
        min = i;
        for(int j = i + 1; j < MAX; j++) {
            if(a[min] > a[j]) {
                min = j;
            }
        }
        pom = a[i];
        a[i] = a[min];
        a[min] = pom;
    }
}