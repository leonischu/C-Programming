//wap in c that accept n number of array and sort them in acending
#include <stdio.h>
#include<conio.h>
int main(){

int n,i;
printf("Enter the number");
scanf("%d",&n);

int num[n];
for(i=0;i<n;i++){
	printf("enter the no%d:\n",i+1);
	scanf("%d",&num[i]);

	}
	for(i=0;i<n;i++){
		printf("Value of %d is %f",i+1,num[i]);
	}
getch();
return 0;

}



