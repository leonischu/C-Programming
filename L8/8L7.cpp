//7. WAP to find sum of main diagonal (also called trace of matrix) of n*n square matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100][100],i,j,n,m,sum=0;
	printf("Enter the row matrix:\n");
	scanf("%d",&m);
	printf("Enter the column matrix:\n");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the a[%d][%d] element:\n",i,j);
			scanf("%d",&a[i][j]); 
		}
	
}
printf("The %d*%d matrix is:\n",i,j);
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d\t",a[i][j]);
	}	
	printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
		
	}
	printf("\nThe sum of main diagonal  is:%d",sum);
	getch();
	return 0;
}
