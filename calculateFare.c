//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: calculation of fare program
*/

#include <stdio.h> 

float calculateFare(float distance){
	float fareRate=50.00;
	float totalFare=distance*fareRate;
	return totalFare;
}

int main(){
	float distance;
	printf("Enter distance traveled (in km): ");
	scanf("%f", &distance);
	
	float fare=calculateFare(distance);
	printf("Total fare: Ksh. %.2f\n", fare);
	
	return 0;
	}
