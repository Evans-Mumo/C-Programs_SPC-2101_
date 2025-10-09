//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Program to handle withdrawals
*/

#include <stdio.h>

int main(){
	int amount;
    int balance = 48500;
    printf("Your current balance is %d \n", balance);

    while (balance >0) {
        printf("Enter the amount to withdraw \n ");
        scanf("%d", &amount);
        balance -= amount;
        printf("New balance = %d \n", balance);
    }
    printf("Insufficient account balance. Cannot withdraw.\n");
    return 0;
    
}