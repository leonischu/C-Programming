#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float r1,r2,a,b,c;
	printf("Enter the value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("The roots are %f and %f",r1,r2);
	getch();
	return 0;

}
