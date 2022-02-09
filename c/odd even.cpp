#include<stdio.h>
#include <conio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	
	if (number % 2==0){
		printf("Even number");

	}else{
		printf("odd number");
	}
	return 0;
}
