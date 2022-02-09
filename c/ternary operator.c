// ternary operator syntax condition ? statement if true : statement if false.

#include<stdio.h>
#include<conio.h>
int main(){
	int age;
printf("Enter the age  : \n");
scanf("%d",&age);
age>22 ?  printf("You are voter\n" ) : printf("you are not voter.");

/*
if( age > 22 ) {
  printf("You are voter\n" );
}else{
	printf("you are not voter.");
}*/

	return 0;
}
