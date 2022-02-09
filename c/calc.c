#include<stdio.h>>
#include<conio.h>
int main(){
	int a,b,add,sub,div,mod ,mul;
	printf(" Enter a:\n");
	printf("Enter b:\n");
	scanf("%d%d",&a,&b);
	add= a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=a/b;
	printf("add is:%d\n",add);
	printf("sub is:%d\n",sub);
	printf("mul is:%d\n",mul);
	printf("div is:%d\n",div);
	printf("mod is:%d\n",mod);
	return 0;
}
