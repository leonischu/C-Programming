#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i;
	printf("Enter the no of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter  a[%d] array elements:\n",i);
		scanf("%d",&a[i]);
	}
	printf("The entered array elements are:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	getch();
	return 0;
}
