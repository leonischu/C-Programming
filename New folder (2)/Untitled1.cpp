//to generate 10 terms of fibonacci sequence starting from 2
#include<stdio.h>
#include<conio.h>
void fibo(int a,int b,int n){
	int sum;
	if(n>0){
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
		fibo(a,b,n-1);
	}
	
}
int main(){
	int a,b,sum,n;
	int ii;
	a=2;
	b=3;
	printf("Fibonacci series is:\n");
	printf("%d\t%d\t",a,b);
	fibo(a,b,n-2);
	printf("\n");
	return 0;
}
