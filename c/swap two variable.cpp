#include<stdio.h>
#include<conio.h>
int main(){
	int a=10;
	int b=20;
	int c;

	c = a;
	a = b;
	b=c;
	printf("The value of a is %d.\n",a);
	printf("The value of b is %d.\n",b);
	return 0;
}
