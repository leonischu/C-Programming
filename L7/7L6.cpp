//6. Wap to find sum of all odd number in array.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i,odd=0;
	printf("Enter the number of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the a[%d] element:\n",i);
		scanf("%d",&a[i]);	
	}
	printf("The array element are:\n",n);
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
		
	}
	
for(i=0;i<n;i++){
if(a[i]%2!=0){
odd=odd+a[i];
}
}
printf("\nThe sum of odd element of array is:%d", odd);
	
	
	
	getch();
	return 0;
}
