
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char title[256];
    FILE *fptr;

    printf("Enter the title of the book borrowed: ");
    fgets(title, sizeof(title), stdin);

    // Open the file in append mode to avoid deleting existing records
    fptr = fopen("borrowed_books.txt", "a");
    if (!fptr) {
        printf("Error opening borrowed_books.txt for writing.\n");
        return 1;
    }

    fprintf(fptr, "%s", title);
    fclose(fptr);

    printf("Book title successfully stored.\n");

    return 0;
}
