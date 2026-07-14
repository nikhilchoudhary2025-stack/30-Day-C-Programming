#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int i = 0;

    printf("Compressed string: ");
    while (i < len) {
        int count = 1;
        while (i + count < len && str[i] == str[i + count]) {
            count++;
        }
        printf("%c%d", str[i], count);
        i += count;
    }
    printf("\n");

    return 0;
}