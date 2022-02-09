//3. WAP to find average of array elements
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i,avg;
	 float sum=0;
	printf("Enter the no of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the a[%d] element\n",i);
	scanf("%d",&a[i]);	
	}	
/*	
printf("The array elements are:\n",n);
for(i=0;i<n;i++){
	printf("%d\t",a[i]);
	
}*/
for(i=0;i<n;i++){
	sum=sum+a[i];
	}

	avg=sum/n;
	printf("\nThe avg of all array element are %d",avg);
	getch();
	return 0;
}
