#include<stdio.h>
#include<conio.h>
main(){
	float P,V,T,m;
	printf("Enter the value of pressure:\n");
	scanf("%f",&P);
	printf("Enter the value of volume:\n");
	scanf("%f",&V);
	printf("Enter the value of temperature:\n");
	scanf("%f",&T);
//	P*V=0.37*m*[T+460];
	m=P*V/((T+460)*0.37);

	printf("Mass of air in the automobile tire is:%f",m);


	return 0;
}
