#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i,sum=0;
	printf("Enter the no of array elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the a[%d] array elements:",i);
		scanf("%d",&a[i]);
	}
	printf("The entered array elemants are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);	
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("\nThe sum of array elements are:%d",sum);
	
	getch();
	return 0;
	
}
