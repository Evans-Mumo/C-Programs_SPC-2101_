//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Number guesssing Program 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int guess;
	int outcome;
	int attempts = 0;
	
	srand(time(0));
	outcome= rand() %20+1;
	
	printf("Welcome to the Number Guessing game!! \n");
	printf("Guess a number in between 1 and 20   \n");
	
	while(1){
		printf("Enter your guess:  ");
		scanf("%d",&guess);
		attempts++;
		
		if(guess>outcome){
			printf("Too high! \n");
		}else if (guess<outcome){
			printf("Too low! \n");
		}else{
			printf("Congratulations! You guessed it in %d attempts. \n",attempts);
		} 
	}while(guess!=outcome);
	
	return 0;
	
}