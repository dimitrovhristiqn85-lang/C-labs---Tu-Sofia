#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

typedef struct {
    char name[30];
    long numbr;
    int group;
    float mark;
} student;

student inputStudent(void);
void outputStudent(student);
FILE *writeFile(char *filename);
void readFile(FILE *fp, char *filename);
float avMark(FILE *fp, char *filename,  int searchGroup);
void search(FILE *fp, char *filename, int faknumber);

int main() {
    FILE *fp;
    char filename[30];
    char student[30];
    int searchGroup;
    int faknumber;
    float averageMark;
    

    printf("Vuvedete ime na faila: ");
    gets(filename);

    fp=writeFile(filename);
    printf("\nDanni za vsichki studenti:\n");
    readFile(fp, filename);

    printf("\nVuvedete nomer na grupa:");
    scanf("%d", &searchGroup);

    averageMark = avMark(fp,filename,searchGroup);
    if(!averageMark) {
        printf("\nNqma vavedeni studenti ot grupa%d!", searchGroup);

    } else {
        printf("Srednia uspeh na grupa %d e: %f\n",searchGroup,averageMark);
    }


    printf("vuvedete faknomer na studenta");
    scanf("%d", &faknumber);
    search(fp, filename,faknumber);                                                                                                           //void ne moje da se zapisva v promenliva

    return 0;
}

student inputStudent(void) {
    student a;
    printf("\nName");
    fflush(stdin);
    gets(a.name);
    printf("Number");
    scanf("%ld", &a.numbr);
    printf("Group:");
    scanf("%d", &a.group);
    printf("Mark: ");
    scanf("%f", &a.mark);
    fflush(stdin);
    return(a);
}

void outputStudent(student st) {
    printf("\nName: %s\n", st.name);
    printf("Number: %ld\n", st.numbr);
    printf("Group: %d\n", st.group);
    printf("Mark: %.2f\n", st.mark);
}

FILE *writeFile(char *filename) {
    FILE *fp;
    student s;
    if((fp=fopen(filename, "ab")) == NULL) {
        printf("Fail %s ne moje da bude otvoren.\n", filename);
        exit(1);
    }
     
    do{
        s=inputStudent();
        fwrite(&s, sizeof(s),1,fp);
        printf("Nov student? Y/N");

    } while (toupper(getch()) == 'Y');

    fclose(fp);
    printf("\nFailut e suzdaden!\n");
    return(fp);
    
}

void readFile(FILE *fp, char *filename) {
    student s;
    int flag=0;
    if((fp=fopen(filename, "rb"))==NULL) {
        printf("Fail %s ne moje da bude otvoren\n");
        exit(1);
    }
    while ((fread(&s, sizeof(s),1,fp)==1))
        outputStudent(s);
        fclose(fp);
    
}

float avMark(FILE *fp, char*filename, int searchGroup) {
    student s;
    float avr = 0.0;
    int count=0;
    if((fp = fopen(filename, "rb")) == NULL) {
        printf("Fail %s ne  moje da bude otvoren\n", filename);
        exit(1);
    }
    while (fread(&s, sizeof(s),1,fp)==1) 
     if(s.group == searchGroup) {
        if(s.group == searchGroup) {
            count ++;
            avr += s.mark;
        }
     }
     fclose(fp);
     if(count == 0)
        return 0.0;
     else
        return(avr/count);
}

void search(FILE *fp, char *filename, int faknumber) {
    student s;                                                                                                                         //maham nulata che q zapishva inache i vinagi e nula
    int flag=0;
    if ((fp = fopen(filename, "rb")) == NULL) {
        printf("Fail %s ne moje da bude otvoren\n", filename);
        exit(1);
    }
    while (fread(&s, sizeof(s),1,fp)==1) {
    
        if(faknumber == s.numbr) {
            printf("Imeto na turcsniq chivek e%s\n", s.name);
            flag = 1;
            break;
        }
    }
        if(flag == 0) {
            printf("nqma nameren takuv student: %d\nn", faknumber);
        }
      
    
    fclose(fp);
}
    
