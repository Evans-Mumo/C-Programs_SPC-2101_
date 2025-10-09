//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Password system program
*/

#include <stdio.h>
#include <string.h>

 int main(){
 	char password[100];
 	
 	do{
		 printf("Enter password: ");
		 scanf("%s", &password);
		  
	 }while (strcmp(password, "1234") != 0);
	 
	 printf("Access Granted \n");
	 
	 return 0;
 }