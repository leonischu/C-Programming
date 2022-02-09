#include<stdio.h>
#include<conio.h>
void add(int,int);
int main(){
	int a,b;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	printf("Transfer control to odd function:");
	add(a,b);
	printf("\ncontrol back to main function");
	getch();
	return 0;
	
}
void add(int a,int b){
	int c;
	c=a+b;
	printf("sum of %d,%dis:%d",a,b,c);
}
