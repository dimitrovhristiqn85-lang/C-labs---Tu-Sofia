#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 50
#define LIBRARY_SIZE 5

struct Books {
    char title[MAX];
    char autor[MAX];
    char subject[MAX];
    int book_id;
};

void printBook(struct Books book);

int main() {
    struct Books library[LIBRARY_SIZE];
    

    strcpy(library[0].title, "C Programming");                                                                                    //taka se sadava che tezi neshta shte se sapishat v masiv nomer 0 ot 5 obshta
    strcpy(library[0].autor, "Nuha Ali");
    strcpy(library[0].subject, "C Programming Tutorial");
    library[0].book_id=6495407;

    strcpy(library[1].title, "Telecom Billing");
    strcpy(library[1].autor, "Zara Ali");
    strcpy(library[1].subject, "Telecom Billing Tutorial");
    library[1].book_id = 6495700;

    printBook(library[0]);
    printBook(library[1]);

    return 0;
}

void printBook(struct Books book) {
    printf("Book title:%s\n", book.title);
    printf("Book author:%s", book.autor);
    printf("Book subject:%s\n", book.subject);
    printf("Book id:%d\n", book.book_id);
}
