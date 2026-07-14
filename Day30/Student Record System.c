#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
    float average;
    char grade;
};

void calculateGrade(struct Student *s) {
    s->average = (s->marks[0] + s->marks[1] + s->marks[2]) / 3;
    if (s->average >= 90) s->grade = 'A';
    else if (s->average >= 75) s->grade = 'B';
    else if (s->average >= 60) s->grade = 'C';
    else if (s->average >= 40) s->grade = 'D';
    else s->grade = 'F';
}

void displayStudent(struct Student s) {
    printf("Roll: %d | Name: %s | Avg: %.2f | Grade: %c\n",
           s.rollNo, s.name, s.average, s.grade);
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        students[i].rollNo = i + 1;
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Enter 3 subject marks:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
        calculateGrade(&students[i]);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++)
        displayStudent(students[i]);

    return 0;
}