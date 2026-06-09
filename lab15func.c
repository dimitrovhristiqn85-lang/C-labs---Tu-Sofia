#include "lab15zad1.h"

node * makeStrlst(node*head,FILE *f) {
    node *p,*crnt,*prev;
    do {
        p=(node *)malloc(sizeof(node));
        if(p==NULL) {
            printf("Memory Error!");
            exit(1);
        }
        p->next=NULL;
        if(!fread(&(p->prs),sizeof(Person),1,f)) {
            free(p);
            break;
        }
        prev=NULL;
        crnt=head;
        p->next=head;
        head=p;
    }while(1);
    return head;
}

void prt(node *crnt) {
    if(crnt) {
        printf("the list is:\n");
        while(crnt) {
            printf("%s has %d na adres: %d\n",crnt -> prs.name,crnt->prs.n,crnt);
            crnt=crnt->next;
        }
    }
    else 
    printf("Prazen spisuk!\n");
}

void find_sum(node *crnt) {
    int sum=0;
    if(crnt) {
        while(crnt) {
            sum+=crnt->prs.n;
            crnt=crnt->next;
        }
        printf("sum=%d",sum);
    } else {
        printf("Prazen spisuk!\n");
    }
}

void ime(node *crnt) {
    long find=0;
    printf("vuvedete nomera na turceniq chovek");
    scanf("%ld", &find);
    if(crnt) {
        while (crnt) {
            if(find == crnt->prs.n) {
                printf("Chovek e:%s",crnt->prs.name);
                
            } else {
                printf("Ne e nameren takuv chovek");
                break;
            }
            crnt=crnt->next;
        }
        
    }
   
}

void change(node *crnt) {
    long find=0;
    char newname[30];
    printf("vuvedete nomera na choveka,koeto ime iskate da promenite:\n");
    scanf("%ld", &find);
    if(crnt) {
        while (crnt) {
            if(find == crnt->prs.n) {
                printf("Napishee novoto ime:\n");
                fgets(newname, 30, stdin);
                strcpy(crnt->prs.name, newname);
                break;
            }
            crnt=crnt->next;
            
        }
        }
        
    }

node *free_m(node *crnt) {
    node* next;
    printf("\nMemory free!\n");
        while(crnt) {
            next = crnt->next;
            free(crnt);
            crnt=next;
        }
    return NULL;
    }