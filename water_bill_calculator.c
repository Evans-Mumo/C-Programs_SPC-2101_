//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Water Bill Calculator  
*/

#include <stdio.h> //pre-processor directive

int main() {
    int units;
    double totalBill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 30) {
        totalBill = units * 20.0;
    } else if (units >= 31 && units <= 60) {
        totalBill = (30 * 20.0) + ((units - 30) * 25.0);
    } else if (units > 60) {
        totalBill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    } else {
        printf("Invalid units entered.\n");
        return 1;
    }

    printf("Total water bill: %.2f KES\n", totalBill);

    return 0;
}
