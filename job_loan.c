//C Program
/*
Name: Evans Mumo
Reg No: CT100/G/26238/25
Description: Qualification for Job Loan
*/

#include <stdio.h> //pre-processor directive

int main() {
    int age;
    float income;

    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your annual income (in Shillings): ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000.0) {
        printf("Congratulations you qualify for a loan.\n");
    }
	 else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    
    return 0;
	}
