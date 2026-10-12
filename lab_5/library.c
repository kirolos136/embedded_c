#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

typedef enum{ AVAILABLE , UNAVAILABLE} bookStatus;
typedef enum { FICTION, NON_FICTION, SCIENCE, HISTORY, TECHNOLOGY, CHILDREN } bookCategory;

typedef struct Book{
    char title[100];
    char author[100];
    float price;
    bookStatus stat;
    bookCategory cat;
} Book;

typedef struct Library
{
    Book* books;
    unsigned int capacity;
    unsigned int size;
} Library;

//**********************************/
//utility function

void to_lower_case(char str[]){
    for(int i=0;str[i] != '\0';i++){
        str[i] = tolower(str[i]);
    }
}

void printBookDetails(Book* book) {
    printf("\n===== Book Details =====\n");
    printf("Title:  %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Price:  %.2f\n", book->price);
    printf("Status: %s\n", book->stat == AVAILABLE ? "Available" : "Unavailable");

    printf("Category: ");
    switch (book->cat) {
        case FICTION:     printf("Fiction"); break;
        case NON_FICTION: printf("Non-Fiction"); break;
        case SCIENCE:     printf("Science"); break;
        case HISTORY:     printf("History"); break;
        case TECHNOLOGY:  printf("Technology"); break;
        case CHILDREN:    printf("Children"); break;
        default:          printf("Unknown"); break;
    }

    printf("\n========================\n");
}


/***********************************/

//return 0 if success and 1 if failure
int add_book(Library* lib, char* title , char* author , float price , bookStatus st, bookCategory cat){
    Book* temp;

    //check if no books
    if(lib->books == NULL){
        temp = (Book*) malloc( 4 * sizeof(Book) );
        if(temp == NULL) return 1;
        lib->books = temp;
        lib->capacity =4; 
    }

    //check if there is no capacity
    if(lib->capacity == lib->size){
        unsigned int new_capacity = lib->capacity * 4;
        temp = (Book *) realloc(lib->books , new_capacity * sizeof(Book));
        if(temp == NULL) return 1;
        lib->books = temp;
        lib->capacity = new_capacity;
    }

    //adding the book
    Book *b = &lib->books[lib->size];

    //for handling null characters and note char arrays can't be assigned directly with a string after initialization
    strncpy(b->title , title , sizeof(b->title) - 1);
    b->title[sizeof(b->title) - 1] = '\0';
    to_lower_case(b->title);// this is made for easier searching

    strncpy(b->author,author,sizeof(b->author) - 1);
    b->author[sizeof(b->author) - 1] = '\0';
    to_lower_case(b->author);// this is made for easier searching

    b->price = price;
    b->stat = st;
    b->cat = cat;

    lib->size++;

    return 0;
}

Book* searchByTitle(Library* lib , char* title){
    char str[100];
    strncpy(str,title,sizeof(str) - 1);
    str[sizeof(str) - 1] = '\0';
    to_lower_case(str);

    for(int i=0;i<lib->size;i++){
        if(strcmp(lib->books[i].title,str) == 0){
            return &lib->books[i];
        }
    }
    return NULL;
}

Book* searchByauthor(Library* lib , char* author){
    char str[100];
    strncpy(str,author,sizeof(str) - 1);
    str[sizeof(str) - 1] = '\0';
    to_lower_case(str);

    for(int i=0;i<lib->size;i++){
        if(strcmp(lib->books[i].author , str) == 0){
            return &lib->books[i];
        }
    }
    return NULL;
}

//change book status knowing which book by title
void changeBookStatus(Library* lib, char* title ,bookStatus st){
    Book* b = searchByTitle(lib , title);
    
    if(b == NULL){
        printf("Book doesn't exist.\n");
        return;
    }

    b->stat = st;
    printf("status Changed Successfully");
}


void countBooksInEachCategory(Library* lib){
    int fiction = 0, non_fiction = 0, science = 0,history = 0, technology = 0, children = 0;
    for(int i=0;i<lib->size;i++){
        switch (lib->books[i].cat)
        {
        case FICTION:
            fiction++;
            break;
        case NON_FICTION:
            non_fiction++;
            break;
        case SCIENCE:
            science++;
            break;
        case HISTORY:
            history++;
            break;
        case TECHNOLOGY:
            technology++;
            break;
        case CHILDREN:
            children++;
            break;
        default:
            break;
        }
    }

    printf("\n===== Books Count by Category =====\n");
    printf("Fiction:     %d\n", fiction);
    printf("Non-Fiction: %d\n", non_fiction);
    printf("Science:     %d\n", science);
    printf("History:     %d\n", history);
    printf("Technology:  %d\n", technology);
    printf("Children:    %d\n", children);
    printf("===================================\n");
}

int main(){
    Library lib = {NULL,0,0};
    add_book(&lib, "Deep Work", "Cal Newport", 150, AVAILABLE, SCIENCE);
    printBookDetails(&lib.books[0]);
    add_book(&lib, "The Hobbit", "J.R.R. Tolkien", 200, AVAILABLE, FICTION);
    printBookDetails(&lib.books[1]);
    add_book(&lib, "Sapiens", "Yuval Noah Harari", 180, AVAILABLE, NON_FICTION);
    add_book(&lib, "A Brief History of Time", "Stephen Hawking", 220, AVAILABLE, SCIENCE);
    add_book(&lib, "The Little Prince", "Antoine de Saint-Exupery", 100, AVAILABLE, CHILDREN);

    Book* reqBook = searchByauthor(&lib,"cal newport");
    if(reqBook == NULL){
        printf("Book not found.\n");
    }else{
        printBookDetails(reqBook);
    }

    reqBook = searchByTitle(&lib,"Sapiens");

    if(reqBook == NULL){
        printf("Book not found.\n");
    }else{
        printBookDetails(reqBook);
    }

    countBooksInEachCategory(&lib);

    free(lib.books);
}