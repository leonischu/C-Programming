//a. 1! + 2! + 3! + 4! +.......
#include<stdio.h>
#include<conio.h>
int fact(int);
int main(){
	int i,num;
	float result;
	printf("enter the no of series:\n");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		result=result+fact(i);
	}
	printf("The sum of %d series is:%f",num);
	return 0;
}
int fact(int a){
	int i,fact=1;
	for(i=1;i<a;i++){
		fact=fact*i;
		
	}
	return fact;
}
