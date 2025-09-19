//Simple C Program , Single line comment
/*
Name: Evans Mumo
Reg: CT100/G/26238/25
Description: body measurements
*/

#include <stdio.h> //pre-processor directive scanf

//main function
int main(){
	int height;
	int phonenumber;
	int weight;
	
	printf("Enter your height :");
	scanf("%d", &height);
	
	printf("Enter your phone number :");
	scanf("%d",&phonenumber);
	
	printf("Enter your weight :");
	scanf("%d", &weight);
	
	printf("\nYour height is %d cm", height);
	printf("\nYour phone number is +254%d", phonenumber );
	printf("\nYour weight is %d kg", weight);
	
	return 0;
	}
 