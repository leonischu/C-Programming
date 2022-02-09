#include<stdio.h>
#include <conio.h>
int main(){
	int a[100],large,small,i,n=100;
	printf("Enter a array:");

	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	large=small=a[0];
	for(i=1;i<n;++i)
	;{
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)
		small=a[i];
		
	}
	
	printf("The largest no is %d",large);
	printf("\n The smallest no is%d",small);
	return 0;

	
	
}
