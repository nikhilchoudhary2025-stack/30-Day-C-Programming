#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; i < len1; i++) {
        freq[(int)str1[i]]++;
    }

    for (int i = 0; i < len2; i++) {
        freq[(int)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");

    return 0;
}