#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char buffer[1000];
    char ch;

    printf("Enter the file name to open:\n");
    scanf("%s", filename);

    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("File does not exist.\n");
        return 1;
    }

    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    printf("\nEnter text to overwrite the file:\n");
    scanf(" %[^\n]", buffer);
    fprintf(fptr, "%s", buffer);
    fclose(fptr);

    return 0;
}