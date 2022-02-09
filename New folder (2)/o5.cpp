//program to generate first 15 numbers of fibonacci sequence
#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main(void){
	for(int n=0;n<15;n++){
		printf("%d\t",fibonacci(n));
	}
	return 0;
}
int fibonacci(int num){
	if(num==0 || num==1){
		return num; 
	}
	else{
		return fibonacci(num-1)+fibonacci(num-2);
		
	}
}
