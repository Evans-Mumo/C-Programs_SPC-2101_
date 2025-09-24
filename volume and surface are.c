//C Program
/*
Name: Evans Mumo
Reg No: CT100/G/26238/25
Description: Computation of volume and surface area
*/

#include <stdio.h> //pre-processor directive
#include <math.h> //required for M_PI and pow()

int main() {
    double radius, height, volume, surfaceArea;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    volume = M_PI * pow(radius, 2) * height;
    surfaceArea = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;

    printf("Volume of the cylinder: %.2lf\n", volume);
    printf("Surface area of the cylinder: %.2lf\n", surfaceArea);
    
    return 0;
	}