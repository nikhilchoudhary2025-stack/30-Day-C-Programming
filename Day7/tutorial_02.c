#include<stdio.h>
#include<string.h>

int main()
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar(); // Consume the newline character left in the input buffer
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Limit input to prevent buffer overflow
    name[strlen(name) - 1] = '\0'; // Remove the newline character from the end of the string

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    
    return 0;
}