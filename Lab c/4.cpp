//calculate cb^3/d^2
#include<stdio.h>
#include<conio.h>
#include<math.h>
    main(){
	float c,b,d;
	printf("Enter the value of c:\n");
	scanf("%f",&c);
	printf("Enter the value of b:\n");
	scanf("%f",&b);
	printf("Enter the value of d:\n");
	scanf("%f",&d);
	float Result;
	Result=c*(b*b*b)/(d*d);
	
	printf("The value is %f",Result);
	
	
	return 0;
	
}

