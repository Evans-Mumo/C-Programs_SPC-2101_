//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Program that reads and displays student names and marks from results.dat binary file
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regno[20];
    int marks;
};

int main(void) {
    FILE *fptr = fopen("results.dat", "rb");
    struct Student st;

    if (!fptr) {
        printf("Error: could not open results.dat for reading.\n");
        return 1;
    }

    printf("Student Results:\n");
    // Read and display each record
    while (fread(&st, sizeof(struct Student), 1, fptr) == 1) {
        printf("Name: %s | Marks: %d\n", st.name, st.marks);
    }

    fclose(fptr);
    return 0;
}
