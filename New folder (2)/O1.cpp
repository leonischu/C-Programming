//write a recursive program to generate the fibonacci series up to N term.
#include<stdio.h>
int fibo(int);
int main(){
	int n,i;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d\t",fibo(i));
		
	}
	return 0;
}
int fibo(int num){
	if (num==0 || num==1){
		return num;
	}
	else{
		return fibo(num-1)+fibo(num-2);
	}
}
