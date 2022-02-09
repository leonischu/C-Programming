#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PIE 3.14
 main(){
	float r,A,V;
	printf("Enter the radius of Sphere:\n");
	scanf("%f", &r);
	A= 4*PIE*r*r;
	printf("The Surface area is %f \n", A);
	V=1.33*PIE*r*r*r;
	printf("The Volume is %f",V);	
	return 0;
	
	
}
