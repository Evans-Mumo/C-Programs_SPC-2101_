//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Mobile Data Bundle Purchase computation
*/

#include <stdio.h> //pre-processor directive

int main() {
    int choice;

    //Display the menu
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");

    //Get user's choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    //Use a switch statement to display the selected bundle and its cost
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;

}
