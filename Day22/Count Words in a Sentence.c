#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int wordCount = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            wordCount++;
        }
    }

    printf("Word count = %d\n", wordCount);

    return 0;
}