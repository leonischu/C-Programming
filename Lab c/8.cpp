#include<stdio.h>
#include<conio.h>
main(){
	float C,F;
	printf("Enter the temperature in Centrigate: \n");
	scanf("%f",&C);
	F= 1.8*C+32;
	printf("The temperature in farenheit is %f",F);
	
	return 0;
}
