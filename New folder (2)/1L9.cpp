//WAP to program to calculate Sum, Difference, Product and Division of two number using functions.
#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
	int a,b;
	float result;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	result=add(a,b);
	printf("The sum of result is:%f\n",result);
	result=sub(a,b);
	printf("The sub of result is:%f\n",result);
	result=mul(a,b);
	printf("The mul of result is:%f\n",result);
	result=div(a,b);
	printf("The div of result is:%f\n",result);
	return 0;
	}
	
int add(a,b){
	return a+;
}
int sub(x,y){
	return x-y;
	
}
int mul(x,y){
	return x*y;
}
int div(x,y){
	return x/y;
}

