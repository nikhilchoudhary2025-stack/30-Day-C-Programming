#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int freq[256] = {0};

    for (int i = 0; i < len; i++) {
        freq[(int)str[i]]++;
    }

    for (int i = 0; i < len; i++) {
        if (freq[(int)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");

    return 0;
}