#include<stdio.h>
#include<conio.h>
main(){
	float P,T,R,SI,A;
	printf("Enter the  value of Principle:\n");
	scanf("%f", &P);
	printf("Enter the  value of Time:\n");
    scanf("%f", &T);
 	printf("Enter the  value of Rate:\n");
 	scanf("%f", &R);
 	SI= P*T*R/100;
 	A=SI+P;
 	printf("The Simple Interest is %f \n",SI);
  	printf("The total amount is %f \n",A);


 	
	return 0;
}
