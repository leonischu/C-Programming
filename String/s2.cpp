//WAP to display string in reverse order
#include<stdio.h>
#include<conio.h>
int main(){
	char string[100];
	int i,j;
	printf("Enter the string:\n");
	gets(string);
	while(string[i]!='\0'){
		i++;
	}
	printf("\n The reversee string is:",string);
	for(j=i-1;j>=0;j--){
		printf("%c",string[j]);
		}
	
	
	getch();
	return 0;
}
