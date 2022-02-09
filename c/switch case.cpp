/*
Syntax: switch(which one to switch){
case
statements
}

*/
#include<stdio.h>
#include<conio.h>
int main(){
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	
	//check number using switch case 
switch(number){
	case 1:
		printf("Day is Sunday.");
		break;
	
	case 2:
			printf("Day is Monday.");
				break;
	case 3:
			printf("Day is Tuesday.");
				break;
			
	case 4:
			printf("Day is Wednesday.");
		break;		
			
	case 5:
			printf("Day is Thursday.");
				break;
	case 6:
			printf("Day is Friday.");
			
				break;
	case 7:
			printf("Day is Saturday.");	
		break;
		default:
		printf("Invalid option.");	
}	
	return 0;
}
