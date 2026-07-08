#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks[3];
    float average;
    char grade;
};

void calculateResult(struct Student *s) {
    s->average = (s->marks[0] + s->marks[1] + s->marks[2]) / 3;
    if (s->average >= 90) s->grade = 'A';
    else if (s->average >= 75) s->grade = 'B';
    else if (s->average >= 60) s->grade = 'C';
    else if (s->average >= 40) s->grade = 'D';
    else s->grade = 'F';
}

void displayStudent(struct Student s) {
    printf("ID: %d | Name: %s | Age: %d | Avg: %.2f | Grade: %c\n",
           s.id, s.name, s.age, s.average, s.grade);
}

int searchStudent(struct Student students[], int n, int id) {
    for (int i = 0; i < n; i++)
        if (students[i].id == id)
            return i;
    return -1;
}

void findTopperAndLowest(struct Student students[], int n) {
    int topIdx = 0, lowIdx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].average > students[topIdx].average)
            topIdx = i;
        if (students[i].average < students[lowIdx].average)
            lowIdx = i;
    }
    printf("Topper: %s (%.2f)\n", students[topIdx].name, students[topIdx].average);
    printf("Lowest: %s (%.2f)\n", students[lowIdx].name, students[lowIdx].average);
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("\nEnter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter 3 subject marks:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
        calculateResult(&students[i]);
    }

    int choice;
    do {
        printf("\n=== School Management System ===\n");
        printf("1. Display all students\n");
        printf("2. Search student by ID\n"); 
    return 0;
}