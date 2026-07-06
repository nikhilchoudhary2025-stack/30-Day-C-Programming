#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    scanf("%s", str);

    int choice;
    do {
        printf("\n--- String Operations ---\n");
        printf("1. Find length\n2. Reverse string\n3. Count vowels\n");
        printf("4. Convert to uppercase\n5. Check palindrome\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Length = %d\n", (int)strlen(str));

        } else if (choice == 2) {
            int len = strlen(str);
            int start = 0, end = len - 1;
            char temp;
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++; end--;
            }
            printf("Reversed: %s\n", str);

        } else if (choice == 3) {
            int vowels = 0;
            for (int i = 0; i < strlen(str); i++) {
                char ch = str[i];
                if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                    vowels++;
            }
            printf("Vowels = %d\n", vowels);

        } else if (choice == 4) {
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 'a' + 'A';
            }
            printf("Uppercase: %s\n", str);

        } else if (choice == 5) {
            int len = strlen(str);
            int isPalin = 1;
            for (int i = 0; i < len / 2; i++) {
                if (str[i] != str[len - 1 - i]) {
                    isPalin = 0;
                    break;
                }
            }
            printf(isPalin ? "Palindrome!\n" : "Not a palindrome!\n");

        } else if (choice != 6) {
            printf("Invalid choice!\n");
        }
    } while (choice != 6);

    printf("Exiting string operations.\n");
    return 0;
}