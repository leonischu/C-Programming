#include<stdio.h>
#include<conio.h>
void fun(int *p);
void main(){
	int x=4;
	printf("%d\n",x);
	fun(&x);
	printf("%d\n",x);
}
fun(int*p){
	*P=*p/2+13;
}
