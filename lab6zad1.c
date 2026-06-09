#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct BOOKS{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct BOOKS book);
void enterBook(struct BOOKS book);

int main() {

    int c;
    printf("Choose an operation:1.See abook or 2.Write a book:\n");
    scanf("%d", &c);

    switch (c) {
        case 1:
        struct BOOKS Book1;
        struct BOOKS Book2;

        strcpy(Book1.title, "C Programming");                                                                                                //strcpy za kopirane na edin niz v drug
        strcpy(Book1.author, "Nuha Ali");
        strcpy(Book1.subject, "C Programming Tutorial");
        Book1.book_id = 6495407;

        strcpy(Book2.title, "Telecom Billing");
        strcpy(Book2.author, "Zara Ali");
        strcpy(Book2.subject, "Telecom Billing Tutorial");
        Book2.book_id = 6495700;

        printBook(Book1);
        printBook(Book2);

        break;

        case 2:
        struct BOOKS createbook;

        char t[50];
        char a[50];
        char sub[100];
        int id;

        printf("Zadaite ime na kniga:\n");
        scanf("%s", t);                                                                                                                  //pri charovete ne se slaga &, & se slaga pri cifrovite tipove

        printf("Zadaite avtor na kniga:\n");
        scanf("%s", a);

        printf("Zadaite tema na knigata:\n");
        scanf("%s", sub);

        printf("Zadaite id na knigata:\n");
        scanf("%d", &id);                                                                                                                 //kato shte vkarvame chisla ne trqbva promenlivata v koqto shte gi zapisvame da e ravna na nula!!!                                                                                                        //eto tova tuk ima & shtoto e cifra

        strcpy(createbook.title, t);
        strcpy(createbook.author, a);
        strcpy(createbook.subject, sub);                                                                                                //tuka ne se slaga &, samo bukvata si se pishe
        createbook.book_id = id;

        enterBook(createbook);
        break;
        
        default:
        printf("Nepravilen kod");
    }
    return 0;
}

void printBook(struct BOOKS book) {
    printf("Book title:%s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book subject:%s\n", book.subject);
    printf("Book id:%d\n", book.book_id);
}

void enterBook(struct BOOKS book) {
    printf("Book title:%s\n", book.title);
    printf("Book author:%s\n", book.author);
    printf("Book subject:%s\n", book.subject);
    printf("Book id: %d\n", book.book_id);
}