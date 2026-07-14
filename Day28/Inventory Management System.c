#include <stdio.h>
#include <string.h>

struct Product {
    int productId;
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product inventory[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        inventory[i].productId = i + 1;
        printf("Name: ");
        scanf("%s", inventory[i].name);
        printf("Quantity: ");
        scanf("%d", &inventory[i].quantity);
        printf("Price: ");
        scanf("%f", &inventory[i].price);
    }

    int choice;
    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Display all products\n2. Search product\n");
        printf("3. Update quantity\n4. Total inventory value\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\n--- All Products ---\n");
            for (int i = 0; i < n; i++) {
                printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                       inventory[i].productId,
                       inventory[i].name,
                       inventory[i].quantity,
                       inventory[i].price);
            }

        } else if (choice == 2) {
            char searchName[50];
            printf("Enter product name to search: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(inventory[i].name, searchName) == 0) {
                    printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                           inventory[i].productId,
                           inventory[i].name,
                           inventory[i].quantity,
                           inventory[i].price);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Product not found!\n");

        } else if (choice == 3) {
            int searchId, newQty;
            printf("Enter product ID to update: ");
            scanf("%d", &searchId);
            printf("Enter new quantity: ");
            scanf("%d", &newQty);
            for (int i = 0; i < n; i++) {
                if (inventory[i].productId == searchId) {
                    inventory[i].quantity = newQty;
                    printf("Quantity updated!\n");
                    break;
                }
            }

        } else if (choice == 4) {
            float totalValue = 0;
            for (int i = 0; i < n; i++)
                totalValue += inventory[i].quantity * inventory[i].price;
            printf("Total inventory value: %.2f\n", totalValue);

        } else if (choice != 5) {
            printf("Invalid choice!\n");
        }
    } while (choice != 5);

    printf("Exiting inventory system.\n");
    return 0;
}