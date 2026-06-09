#include "lab7zad1header.h"

char* txt_menu_g[] = {
    "MENU:",
    "Minimum i maksimum",
    "Chisla v interval",
    "Sredno aritmetichna stoinost",
    "Zamqna na otrichatelni stoinosti",
    "Sbor na chisla ot konkreten interval",
    "Izvod",
    NULL
};

int main() {

    int choise;
    int total=0;
    char fname[40];
    FILE *f1;

    puts("Vavedete ime na fail:");
    fgets(fname, sizeof(fname), stdin);
    fname[strlen(fname)-1]='\0';

    if(!(f1=fopen(fname,"rt"))) {
        fprintf(stderr, "input file not found\n");
        exit(1);
    }

    do {

        choise = menu(txt_menu_g);

        switch (choise) {

            case 1:
            maxmin(f1);
            getch();                                                                                        //za izchistvane na vhodniq bufer
            break;                                                                                          //bez break se izpulnqvat vsichki casesove
            case 2:
            interval(f1);
            getch();
            break;
            case 3:
            av(f1);
            getch();
            break;
            case 4:
            change(f1);
            getch();
            break;
            case 5:
            numinterval(f1);
            getch();
            break;
            case 6:
            exit(1);
            break;
            default:
            getch();

        } 
        system("cls");

    } while (1);
    fclose(f1);
    
    return 0;

}