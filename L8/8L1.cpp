//1. WAP to input and output m*n matrix
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100][100],i,j,m,n;
	printf("Enter the size of row matrix:\n");
	scanf("%d",&m);
	printf("Enter the size of column matrix:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("Enter the size of a[%d]a[%d] element:\n",i,j);
		scanf("%d",&a[i][j]);
	
		}	
	}
	printf("The %d*%d matrix is:\n",m,n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	getch();
	return 0;
}
