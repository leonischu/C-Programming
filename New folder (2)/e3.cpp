#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,sum=0,i,odd=0;
	printf("Enter the no of array elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the a[%d] array element:\n",i);
		scanf("%d",&a[i]);
	}
	printf("The array elements in even position are:");
	for(i=0;i<n;i=i+2){
		printf("%d\t",a[i]);
	}

	getch();
	return 0;
	
	
}
