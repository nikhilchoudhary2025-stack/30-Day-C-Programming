#include <stdio.h>

struct Book {
    int bookId;
    char title[100];
    char author[50];
    int isAvailable;
};

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book library[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &library[i].bookId);
        printf("Title: ");
        scanf("%s", library[i].title);
        printf("Author: ");
        scanf("%s", library[i].author);
        library[i].isAvailable = 1;
    }

    int choice, searchId;
    printf("\n1. Display all books\n2. Issue a book\n3. Return a book\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\n--- Library Records ---\n");
        for (int i = 0; i < n; i++) {
            printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                   library[i].bookId,
                   library[i].title,
                   library[i].author,
                   library[i].isAvailable ? "Available" : "Issued");
        }
    } else if (choice == 2) {
        printf("Enter Book ID to issue: ");
        scanf("%d", &searchId);
        for (int i = 0; i < n; i++) {
            if (library[i].bookId == searchId) {
                if (library[i].isAvailable)  {
                    library[i].isAvailable = 0;
                    printf("Book issued successfully!\n");
                } else {
                    printf("Book is already issued!\n");
                }
            }
        }
    } else if (choice == 3) {
        printf("Enter Book ID to return: ");
        scanf("%d", &searchId);
        for (int i = 0; i < n; i++) {
            if (library[i].bookId == searchId) {
                library[i].isAvailable = 1;
                printf("Book returned successfully!\n");
            }
        }
    }

    return 0;
}