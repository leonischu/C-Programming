/*10. Calculate the amount of electricity bill consumed. Input the unit 
consumed and,
? for first 20 units= Rs.80
? for next 80 units=Rs7.5/unit
? for next 100 units=Rs8.5/unit 
? Beyond 200 units=Rs9.5/unit
All users are charged with tax rate of 15% in total amount. Now calculate 
total amount to be paid.*/
#include<stdio.h>
#include<conio.h>
main(){
	int sum,unit;
	float total;
	printf("Enter the unit consumed:");
	scanf("%d",&unit);
	if(unit<=20){
		sum=80;
		
	}else if(sum<100){
		sum=80+80*7.5+(unit-100)*8.5;
	}else if(sum<200){
		sum=80+80*7.5+100*8.5+(unit-200)*9.5;
	}
	total=(float)1.15*sum;
	printf("The total fee is %f",total);
	getch();
	return 0;
}
