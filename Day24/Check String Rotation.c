#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not a rotation\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        printf("Strings are rotations of each other\n");
    } else {
        printf("Not a rotation\n");
    }

    return 0;
}