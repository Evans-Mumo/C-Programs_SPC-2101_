//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: calculation of electric bills 
*/

#include <stdio.h>

float calculateElectricBill(int units){
	float bill;
	
	if(units<=100){
		bill=units*10;
	}
	else if(units<=200){
		bill=(100*10)+(units-100)*15;
	}
	else{
		bill=(100*10)+(100*15)+(units-200)*20;
	}
	
	return bill;
}

int main(){
	int units;
	printf("Enter the number of units consumed: ");
	scanf("%d", &units);
	
	printf("Total bill: KSh. %.2f\n", calculateElectricBill(units));
	
	return 0;
}