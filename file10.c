#include <zip.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 4096

int main() {
    int err = 0;
    zip_t *za = zip_open("my_archive.zip", 0, &err);

    if (!za) {
        fprintf(stderr, "Can't open zip archive 'my_archive.zip': %s\n", zip_err_str(err));
        return 1;
    }

    int num_files = zip_get_num_entries(za);

    for (int i = 0; i < num_files; i++) {
        const char *filename = zip_get_name(za, i, 0); // Get filename
        if (filename == NULL) {
            fprintf(stderr, "Error getting filename for entry %d\n", i);
            continue; // Skip to the next file
        }

        printf("File: %s\n", filename);

        zip_file_t *zf = zip_fopen_index(za, i, 0); // Open the file within the archive
        if (!zf) {
            fprintf(stderr, "Error opening file '%s' within archive\n", filename);
            continue;
        }

        char buffer[MAX_BUFFER_SIZE];
        int bytes_read;

        while ((bytes_read = zip_fread(zf, buffer, MAX_BUFFER_SIZE)) > 0) {
            // Important: Handle binary data correctly (don't assume null termination)
            fwrite(buffer, 1, bytes_read, stdout);  // Write to standard output
            // Or process the data as needed
        }

        if (bytes_read < 0) {
            fprintf(stderr, "Error reading file '%s': %s\n", filename, zip_file_error_str(zf));
        }

        zip_fclose(zf); // Close the file within the archive
        printf("\n"); // Add a newline after each file's content
    }

    zip_close(za); // Close the zip archive

    return 0;
}