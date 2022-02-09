/*8. WAP to find weather year is leap year or not. (A Leap year is divisible by 
4 but not by 100. In case the year is divisible by 100, year shouldn’t be 
divisible by 400 to be leap year)*/
#include<stdio.h>
#include<conio.h>
main(){
	int year;
	printf("Enter the year:\n");
	scanf("%d",&year);
	if(year%400==0){
		printf("Leap year",year);
		
	}else if(year%100==0){
		printf("Not leap year",year);
		
	}else if (year%4==0){
		printf("Leap year",year);
	}else {
		printf("not leap year",year);
	}
	getch();
	return 0;
	
}
