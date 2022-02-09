//5. WAP to find sum of only even elements in m*n matrix
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100][100],m,n,i,j,sum=0;
	printf("Enter the row matrix:\n");
	scanf("%d",&m);
	printf("Enter the column matrix:\n");
	scanf("%d",&n);
	
	for( i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("Enter the a[%d][%d] element:\n",i,j);
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

for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	if(a[i][j]%2!=0){
	
	sum=sum+a[i][j];
		}
	}
}
printf("\nThe sum of odd no is:%d",sum);
	getch();
	return 0;

}
