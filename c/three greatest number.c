#include<stdio.h>
#include<conio.h>
int main(){
	int num1=20, num2=30, num3=40;
	
	if(num1 > num2 &&  num1 > num3){
	printf("num1 is greater than num2 and num3");
	}else if(num2 > num1 &&  num2 > num3){
		printf("num2 is greater than num1 and num3");
	}else if(num3 > num1 &&  num3 > num2){
		printf("num3 is greater than num1 and num2");
		}
	return 0;
}
