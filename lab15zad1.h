#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[30];
    int n;
}Person;                                                            //Pri typedef imeto se pishe sled kudravite skobi!!!

typedef struct node {
    Person prs;
    struct node *next;

}node;

node *makeStrlst(node *head,FILE *f);
void prt(node*crnt);
node*free_m(node *crnt);
void ime(node*num);
void change(node*name);
void find_sum(node *crnt);