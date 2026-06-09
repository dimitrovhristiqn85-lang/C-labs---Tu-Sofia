#include "lab7zad1header.h"
void my_line_flush() {

    int ch;
    while((ch = getchar())!='\n' && ch != EOF);

}

void maxmin(FILE *f1) {

    int i=0;
    float num;
    float min;
    float max;
    rewind(f1);

    while(fscanf(f1, "%f", &num) != EOF) {

        if(i==0) {
            max=num;
            min=num;
            i++;

        } else {

            if(num<min) {
                min=num;
            }

            if(num>max) {
                max=num;
                i++;
            }
        }

    }
    printf("max = %.2f\n", max);
    printf("min = %.2f\n", min);
    printf("Broi chisla viv faila = %d\n",i);
}

void interval(FILE* f1) {

    int i=0;
    float num;
    FILE*f2;
    char fname[40];
    float left;
    float right;

    printf("Dolna granica:");
    scanf("%f", &left);
    printf("Gorna garnica:");
    scanf("%f", &right);
    puts("Imen na faila:");
    my_line_flush();
    fgets(fname, sizeof(fname), stdin);
    fname[strlen(fname) - 1] = '\0';

    if(!(f2 = fopen(fname, "wt"))) {
        fprintf(stderr, "input file not found\n");
        exit(1);
    }
    rewind(f1);

    while(fscanf(f1, "%f", &num) != EOF) {
        if(num >= left && num <=right)
            {
                fprintf(f2, "%.2f", num);
                i++;
            }

    }
    printf("Noviqt fail e suzdaden!\n");
    printf("Broi chisla v intervala = %d\n", i);
    fclose(f2);

}

void numinterval(FILE *f1) {
    int i = 0;
    float s = 0;                                                                                                //zaduljitelno se nulira
    float num;
    FILE *f2;
    char fname[40];
    float left;
    float toch1;
    float toch2;
    float right;
    printf("Dolna granica:");
    scanf("%f", &left);
    printf("Gorna granica:");
    scanf("%f", &right);
    printf("Purva granica:");
    scanf("%f", &toch1);
    printf("vtora granica");
    scanf("%f", &toch2);
    puts("Ime na faila:");
    my_line_flush();
    fgets(fname, sizeof(fname), stdin);
    fname[strlen(fname) -1]='\0';

    if(!(f2=fopen(fname, "wt"))) {
        fprintf(stderr, "input file not found\n");
        exit(1);

    }
    rewind(f1);

    while(fscanf(f1, "%f", &num) != EOF)  {                                                                 //fscanf ne podurja %.2f tochnosta ne q podurja samo %f poddurja                  //otvarqme tozi fail za da chetem chisla ot nego
        if(num>=left && num<=right) {
        if (toch1 < left || toch1 > right || toch2 < left || toch2 > right){
            printf("Tezi chisla ne za v tozi interval");
            exit(1);
        }
        if(toch1 >= left && toch2 <= right) {
            s+=num;
            i++;
        }
    }

    }
    printf("Noviqt fail e suzdaden!\n");
    printf("Sumata na chislaat v zadadeniq inteval e: %.2f", s);
    fclose(f2);


} 

void av(FILE *f1) {
    int i=0;
    float num;
    float s = 0;
    rewind(f1);
    while(fscanf(f1, "%f", &num) != EOF) {
        s=s+num;
        i++;
    }
    if(!i) {
        printf("vuv faila nqma chisla");

    } else {
        printf ("Sredna stoinost = %.2f", s/i);

    }

}

void change(FILE *f1) {
    int i = 0;
    float num;
    FILE *f2;
    char fname[40];
    puts("Ime na fal:");
    my_line_flush();
    fgets(fname, sizeof(fname), stdin);
    fname[strlen(fname) - 1] = '\0';
    if(!(f2=fopen(fname, "wt"))) {
        fprintf(stderr, "input file not found\n");
        exit(1);
    }
    rewind(f1);
    while(fscanf(f1, "%f",&num) != EOF) {
        if(num<0) {
            fprintf(f2, "%.2f", 0);
            i++;
        } else {
            fprintf(f2, "%.2f", num);
        }

    }
    printf("Noviqt fail e suzdaden\n");
    printf("Broi otricatelni chisla = %d\n", i);
    fclose(f2);

}
