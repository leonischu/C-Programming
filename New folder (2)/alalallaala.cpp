#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	char str[100];
	int i,j,length=0;
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i] != '\0';i++){
		length++;
	}
	for(i=length-1;i>=0;i--){
		for(j=0;j<i;j++){
			printf("%c",str[j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
