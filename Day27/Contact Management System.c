#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    int n;
    printf("Enter number of contacts: ");
    scanf("%d", &n);

    struct Contact contacts[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for contact %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", contacts[i].name);
        printf("Phone: ");
        scanf("%s", contacts[i].phone);
        printf("Email: ");
        scanf("%s", contacts[i].email);
    }

    char searchName[50];
    printf("\nEnter name to search: ");
    scanf("%s", searchName);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("\n--- Contact Found ---\n");
            printf("Name: %s\nPhone: %s\nEmail: %s\n",
                   contacts[i].name,
                   contacts[i].phone,
                   contacts[i].email);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");

    return 0;
}