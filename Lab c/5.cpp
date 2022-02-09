#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PIE 3.14
 main(){
	float r,A,C;
	printf("Enter the radius of circle:\n");
	scanf("%f", &r);
	A= PIE*r*r;
	printf("The Area is %f \n", A);
	C=2*PIE*r;
	printf("The Circumference is %f",C);	
	return 0;
	
	
}
