#define _CRT_SECURE_NO_WARNINGS
#define DIM 5
#include <stdio.h>

void output(int a[]);
int find(int a[],int v,int l,int r);

int main() {
    int a[DIM] = {3,5,8,10,13};
    int res,v;

    printf("Masivat za obrabotka e:\n");
    output(a);
    printf("Vavedte tursen element:\n");
    scanf("%d", &v);
    res=find(a,v,0,DIM-1);
    if(res!=1) {

        printf("Turseniqt element e na poziciq %d v masiv.\n", res);

    } else {

        printf("Turseniqt element ne e nameren!\n");
        
    }
    return 0;
}
 
void output(int a[]) {
    int i;
    int broqch;
    for(i=0;i<DIM;i++) {

        printf("a[%d]=%d\n",i,a[i]);                                                                                       //tuka za broqch si e samoto i

    }

}

int find(int a[],int v,int l,int r) {
    int m;
    int broqch = 0;                                                                   //broqcha vinagi trqbva da e raven na nula za da ne se sudurja bokluk v nego
    while(r>=l) {
        m=(l+r)/2;
        if(v==a[m]) {
            return m;
        }
        if(v < a[m]) {
            r = m-1;
        } else {
            l=m+1;
        }
        broqch++;
    }
    return -1;                                                                                   //kogato elementa ne e nameren i vrushta -1
}
