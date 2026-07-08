#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int isAvailable;
};

void displayBook(struct Book b) {
    printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
           b.id, b.title, b.author,
           b.isAvailable ? "Available" : "Issued");
}

int searchBook(struct Book books[], int n, int id) {
    for (int i = 0; i < n; i++)
        if (books[i].id == id)
            return i;
    return -1;
}

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];
    for (int i = 0; i < n; i++) {
        books[i].id = i + 1;
        printf("Enter title of book %d: ", i + 1);
        scanf("%s", books[i].title);
        printf("Enter author: ");
        scanf("%s", books[i].author);
        books[i].isAvailable = 1;
    }

    int choice;
    do {
        printf("\n1. Display all\n2. Issue book\n3. Return book\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < n; i++)
                displayBook(books[i]);

        } else if (choice == 2) {
            int id;
            printf("Enter book ID to issue: ");
            scanf("%d", &id);
            int idx = searchBook(books, n, id);
            if (idx == -1) {
                printf("Book not found!\n");
            } else if (!books[idx].isAvailable) {
                printf("Book already issued!\n");
            } else {
                books[idx].isAvailable = 0;
                printf("Book issued successfully!\n");
            }

        } else if (choice == 3) {
            int id;
            printf("Enter book ID to return: ");
            scanf("%d", &id);
            int idx = searchBook(books, n, id);
            if (idx == -1) {
                printf("Book not found!\n");
            } else {
                books[idx].isAvailable = 1;
                printf("Book returned successfully!\n");
            }
        }
    } while (choice != 4);

    return 0;
}