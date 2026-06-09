#include "lab15zad1.h"

int main() {
    FILE *fp;
    Person p;
    node *head=NULL;
    if((fp=fopen("person.dat", "wb"))!=NULL) {
        do{
            printf("next name:");
            scanf("%29s",p.name);
            if(!strcmpi(p.name,"*")) break;
            printf("net number:");
            scanf("%d", &(p.n));
            fwrite(&p, sizeof(Person),1,fp);
            printf("Writing the structure in the file\n");

        } while(1);
        fclose(fp);
        printf("the file was created\n");
    }
    else {
        printf("File Opening Error\n");
        exit(1);
    }
    if(!(fp=fopen("person.dat", "rb"))){
    exit(1);
    }
    head=makeStrlst(head,fp);
    prt(head);
    find_sum(head);
    change(head);
    ime(head);
    head=free_m(head);
    return 0;
}
