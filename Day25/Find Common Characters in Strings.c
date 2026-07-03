#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; i < strlen(str1); i++)
        freq1[(int)str1[i]]++;

    for (int i = 0; i < strlen(str2); i++)
        freq2[(int)str2[i]]++;

    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            printf("%c ", (char)i);
        }
    }
    printf("\n");

    return 0;
}