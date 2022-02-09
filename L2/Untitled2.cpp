#include<stdio.h>
#include<conio.h>
int main(){
	int nrows,row,column;
	printf("Enter the no rows:");
	scanf("%d",&nrows);
	for(row=1;row<=nrows;row++){
		for(column=1;column<=row;column++){
			printf("* ");
			
		}
		printf("\n");
	}
	
	
	
		for(row=nrows-1;row>=1;row--){
		for(column=1;column<=row;column++){
			printf("* ");
			
		}
		printf("\n");
	}
	
		for(row=1;row<=nrows;row++){
		for(column=1;column<=row;column++){
			printf("* ");
			
		}
		printf("\n");
	}
	
	
	
		for(row=nrows-1;row>=1;row--){
		for(column=1;column<=row;column++){
			printf("* ");
			
		}
		printf("\n");
	}
	getch();
	return 0;
}
