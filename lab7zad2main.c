#include "lab7zad2header.h"

char *txt_menu_g[] = {
    "Menu:",
    "Polojitelni tochki",
    "Otricatelni tochki",
    "Izvod",
    NULL
};

int main () {
    
    int choice;
    int total=0;
    char fname[40];
    FILE*f1;

    puts("Vuvedete ime na faila");
    fgets(fname, sizeof(fname), stdin);
    fname[strlen(fname) - 1] = '\0';
    do {
        choice = menu(txt_menu_g);
        switch(choice) {

            case 1:
            if(!(f1=fopen(fname, "wb"))) {
                fprintf(stderr, "input file not found\n");
                exit(1);
            }
            f1=input(f1);
            getch();
            break;

            case 2:
            if(!(f1=fopen(fname, "rb"))) {
                fprintf(stderr, "input file not found\n");
                exit(1);
            }
            positiv(f1);
            getch();
            break;

            case 3:
            if(!(f1=fopen(fname, "rb"))) {
                fprintf(stderr,"input file not found\n");
                exit(1);
            }
            negativ(f1);
            getch();
            break;

            case 4:
            if(!(f1=fopen(fname,"rb"))) {
                fprintf(stderr, "input file not found\n");
                exit(1);
            }
            poedno(f1);
            getch();
            break;

            case 5:
            exit(1);
            break;
            default:
            getch();
        }
        system("cls");
    } while(1);
    return 0;
}