//2. WAP to find sum of all elements in array
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],i,n,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter a[%d] element:",i);
		scanf("%d",&a[i]);		
	}
	printf("The %d array elements are:\n",n);
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("\nThe sum of all array element are %d",sum);
	getch();
	return 0;
	
}
