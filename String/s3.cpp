//WAP to copy one string to another
#include<stdio.h>
#include<conio.h>
int main(){
	char str1[100],str2[100];
	int i;
	printf("Enter any string:");
	gets(str1);
	while(str1[i]!=0){
		str2[i]=str1[i];
		i++;
	}
	printf("\nThe copied string is:");
	puts(str2);
	getch();
	return 0;
}
