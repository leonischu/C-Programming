//1. WAP to input and output n array elements.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i;
	printf("Enter a size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
printf("Enter a size of a[%d] array element:",i);
scanf("%d",&a[i]);
}
printf("The array elements are:");
for(i=0;i<n;i++){
	
        printf(" %d ", a[i]);
    
}	
	getch();
	return 0;
}
