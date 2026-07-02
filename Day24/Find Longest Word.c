#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char longest[100] = "";
    char current[100] = "";
    int j = 0;
    int len = strlen(str);

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            current[j] = str[i];
            j++;
        } else {
            current[j] = '\0';
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0;
            current[0] = '\0';
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}