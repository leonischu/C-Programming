#include<stdio.h>
#include<conio.h>
int main(){
	int nrows,row,column;
	printf("Enter the no rows:");
	scanf("%d",&nrows);
	for(row=1;row<=nrows;row++){
		for(column=1;column<=row;column++){
			printf("%d ",column);
			
		}
		printf("\n");
	}
		getch();
	return 0;
}
