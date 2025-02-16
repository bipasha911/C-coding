#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student1;

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter name: ");
    scanf(" %[^\n]s", student1.name); // Important: space before % to consume any leftover newline

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}