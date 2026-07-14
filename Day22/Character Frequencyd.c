
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

    printf("Character frequencies:\n");
    for (int i = 0; i < len; i++) {
        if (freq[(int)str[i]] != 0) {
            printf("%c = %d\n", str[i], freq[(int)str[i]]);
            freq[(int)str[i]] = 0;
        }
    }

    return 0;
}