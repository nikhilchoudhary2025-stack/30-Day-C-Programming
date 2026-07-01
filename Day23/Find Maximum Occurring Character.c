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

    int maxCount = 0;
    char maxChar = str[0];

    for (int i = 0; i < len; i++) {
        if (freq[(int)str[i]] > maxCount) {
            maxCount = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c (appears %d times)\n", maxChar, maxCount);

    return 0;
}