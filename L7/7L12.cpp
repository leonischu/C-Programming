//WAP to find maxium number in an array.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i,max;
	printf("Enter the size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the a[0] element:\n",i);
		scanf("%d",&a[i]);
	}
	printf("The Entered array element are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i] >max){
			max=a[i];
		}
		
	}
	
	printf("\nThe maximum number is:%d",max);
	getch();
	return 0;
}
