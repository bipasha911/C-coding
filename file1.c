#include <stdio.h>

int main() {
    char temp_filename[L_tmpnam]; // L_tmpnam is the maximum size for a temporary filename
    FILE *temp_file = tmpfile(); // Creates a temporary file in binary mode ("wb+")

    if (temp_file == NULL) {
        perror("Error creating temporary file");
        return 1;
    }

    // You can now use temp_file for reading and writing
    fprintf(temp_file, "This is some temporary data.\n");

    // ... (Do something with the temporary file) ...

    // The file is automatically deleted when it's closed
    fclose(temp_file);

    // Or, if you need the filename:
    tmpnam(temp_filename); // Generates a unique temporary filename
    printf("Temporary filename: %s\n", temp_filename);
    temp_file = fopen(temp_filename, "w+"); //Open the file with the generated name
    if (temp_file == NULL) {
        perror("Error creating temporary file");
        return 1;
    }
    // ... use temp_file...
    fclose(temp_file);
    remove(temp_filename); //Manually delete the file

    return 0;
}