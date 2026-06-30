#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    char result[200];
    int k = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            result[k] = str[i];
            k++;
        }
    }
    result[k] = '\0';

    printf("String without spaces: %s\n", result);

    return 0;
}