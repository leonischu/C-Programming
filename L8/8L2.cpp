//2. WAP to find sum of all elements in m*n matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100][100],m,n,i,j,sum=0;
	printf("Enter the size of row matrix:\n");
	scanf("%d",&m);
	printf("Enter the size of column matrix:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("Enter the size of a[%d]a[%d] element:\n",i,j);
		scanf("%d",&a[i][j]);
	
		}	
	}
	printf("\nThe %d*%d matrix is:\n",m, n);
for(i=0; i<m; i++){
for(j=0; j<n; j++){
printf("%d\t",a[i][j]);
}
 printf("\n");
}
	printf("The %d*%d matrix is:",i,j);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			sum=sum+a[i][j];
			
		}
		
	}
	printf("The sum element is:%d",sum);
	
getch();
return 0;	
}
