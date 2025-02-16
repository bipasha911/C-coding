#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int compareByName(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return strcmp(studentA->name, studentB->name);
}

int main() {
    int numStudents;
    struct Student students[MAX_STUDENTS];

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    qsort(students, numStudents, sizeof(struct Student), compareByName);

    printf("\nStudent Records (Sorted by Name):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}