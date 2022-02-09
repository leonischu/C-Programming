//1. WAP to input and output n array elements.
#include<stdio.h>
#include<conio.h>
int main(){
	int ar[2][4]={{11,2,33,44},{11,33,44,55}};
/*	for(i=0;i<5;i++){
		printf("Enter the ar[%d] element:",i);
	scanf("%d",&ar[i]);
	}
	*/
	for(int i=0;i<2;i++){
			for(int j=0;j<4;j++){
		printf("\t%d",ar[i][j]);
	}
	printf("\n");
}

	getch();
	return 0;
}
