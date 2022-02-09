#include<stdio.h>
#include<conio.h>
void add();
int main(){

printf("Transfer control to add function:\n");
add();
printf("\ncontrol back to main function:\n");
getch();
return 0;
}
void add(){
	int a,b,c;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Two numbers are:%d",c);
}
