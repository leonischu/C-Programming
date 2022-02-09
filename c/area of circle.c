#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main(){
	float radius,area;
	printf("Enter the value of radius:\n");
	scanf("%f",&radius);
	area = pi* radius*radius;
	printf("the area of circle is:%f",area);
	return 0;
}
