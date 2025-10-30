//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Program to track hotel weekly revenue and room occupancy using 1D, 2D and 3D arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int days = 7;
	int floors = 5;
	int rooms = 10;
	int branches = 3;
	
	//1D Array - Weekly Revenue Tracker
	int revenue[7];
	int totalRevenue=0;
	float averageRevenue;
	
	printf("Enter revenue for each day of the week: \n");
	int i;
	for (i = 0; i < days; i++) {
		printf("Day %d: ",i+1);
		scanf("%d", &revenue[i]);
		totalRevenue += revenue[i];
	}
	averageRevenue = (float)totalRevenue/days;
	
	printf("\nTotal weekly revenue: %d\n", totalRevenue);
	printf("Average daily revenue: %2f\n", averageRevenue);
	
	//2D Array - Room Occupancy (One Branch)
	int occupancy[5][10];
	srand(time(0));
	printf("\nRoom occupancy per Floor (One Branch): \n");
	int f;
	for (f=0;f<floors;f++){
		int occupied=0, vacant=0;
		int r;
		for(r=0;r<rooms;r++);{
			occupancy[f][r]= rand()%2;
			if(occupancy[f][r])
				occupied++;
			else
				vacant++;
		}
		printf("Floor %d: Occupied: %d, Vacant: %d\n",f+1, occupied, vacant);
	}
	
	//3D Array - Multiple Branches
	int chain[3][5][10];
	int totalOccupied=0;
	printf("\nRoom Occupancy Across All Branches: \n");
	int b;
	for(b=0;b<branches;b++){
		int f;
		for(f=0;f<floors;f++){
			int r;
			for(r=0;r<rooms;r++){
				chain[b][f][r]= rand()%2;
				if(chain[b][f][r])
					totalOccupied++;
			}
		}
	}
	printf("Total occupied rooms across all branches: %d\n", totalOccupied);
	
	return 0;
}