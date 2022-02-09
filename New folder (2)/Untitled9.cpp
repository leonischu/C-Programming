//add two matrix and display the sum stored in third matrix
#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j,k;
	int n=3;
	printf("Enter the size of matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<n;j++){
		
			
				c[i][j]=a[i][j] + b[i][j];
			
		}
	}
	printf("The new matrix is:");
	for(i=0;i<3;i++){
		for(i=0;i<n;i++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
