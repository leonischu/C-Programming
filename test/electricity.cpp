#include<stdio.h>
#include<conio.h>
int main(){
	int unit;
	float total,meter,a;
	printf("Enter the number of unit consumed:");
	scanf("%d",&unit);
	if(unit<100)
	{
		a=unit*40;
		meter=50;
	}
	else if(unit<200)
	{
		a=4000+(unit-100)*50;
		meter=50;
	}
	else if(unit<300)
	{
		a=4000+5000+((unit-200)*60);
		meter=50;	
		
	}
	total=a+meter;
	printf("\n Elecricity bill is%f",total);
	getch();
	return 0;
}
