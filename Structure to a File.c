#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student1 = {101, "Alice", 85.5};
    FILE *fp;

    // Write to file
    fp = fopen("student.dat", "wb"); // "wb" for binary write
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fwrite(&student1, sizeof(struct Student), 1, fp); // Write the entire structure
    fclose(fp);

    // Read from file
    struct Student student2;
    fp = fopen("student.dat", "rb"); // "rb" for binary read
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    fread(&student2, sizeof(struct Student), 1, fp); // Read the entire structure
    fclose(fp);

    printf("Student Information (Read from file):\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}