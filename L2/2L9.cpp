/*9. Calculate the amount of electricity bill consumed. Input the unit consumed 
and,
? for first 100 units= Rs.8/unit
? for next 200 units=Rs12/unit
? Beyond 300 units=Rs15/unit
All users are charged with meter charge with Rs.50.Now calculate total 
//amount to be paid.*/
#include<stdio.h>
#include<conio.h>
main(){
	int sum,unit;
	printf("Enter the unit consumed:");
	scanf("%d",&unit);
	if(unit<=100){
		sum=(unit*8)+50;
	
	}else if( unit<=300){
			sum=(100*8)+(200*12)+(unit-100)*12+50;
	}else{
		sum=(100*8)+(200*12)+(unit-300)*15+50;
	}
	printf("The total amount to be paid is %d",sum);
	getch();
	return 0;
}
