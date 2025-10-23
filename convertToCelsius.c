//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: convertion to celsius program
*/

#include <stdio.h> 

float convertToCelsius(float fahrenheit)
{
	float celsius=(fahrenheit-32)*5/9;
	return celsius;	
}

int main(){
	float fahrenheit;
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	float celsius=convertToCelsius(fahrenheit);
	printf("Temoerature is: %.2f°C\n",celsius);
	
	return 0;
}