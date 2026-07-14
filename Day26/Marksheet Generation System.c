#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[5];
    float total;
    float percentage;
    char grade;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    char subjects[5][20] = {"Maths", "Physics", "Chemistry", "English", "C Programming"};

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;
        for (int j = 0; j < 5; j++) {
            printf("%s marks: ", subjects[j]);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5;

        if (s[i].percentage >= 90)
            s[i].grade = 'A';
        else if (s[i].percentage >= 75)
            s[i].grade = 'B';
        else if (s[i].percentage >= 60)
            s[i].grade = 'C';
        else if (s[i].percentage >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    printf("\n--- Marksheet ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nRoll No: %d | Name: %s\n", s[i].rollNo, s[i].name);
        for (int j = 0; j < 5; j++)
            printf("%s: %.2f\n", subjects[j], s[i].marks[j]);
        printf("Total: %.2f | Percentage: %.2f%% | Grade: %c\n",
               s[i].total, s[i].percentage, s[i].grade);
    }

    return 0;
}