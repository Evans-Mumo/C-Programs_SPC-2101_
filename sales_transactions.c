//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description:Program that reads transactions from sales.txt and displays total sales for the day.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fptr = fopen("sales.txt", "r");
    double amount, total = 0.0;

    if (!fptr) {
        printf("Error: Could not open sales.txt for reading.\n");
        return 1;
    }

    while (fscanf(fptr, "%lf", &amount) == 1) {
        total += amount;
    }

    fclose(fptr);

    printf("Total sales for the day: %.2f\n", total);
    return 0;
}


