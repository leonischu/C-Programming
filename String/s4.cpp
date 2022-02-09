//WAP to check for palindrome string
#include<stdio.h>
#include<conio.h>
int main(){
	char str[100];
	int i,length=0,flag=0,middle;
	printf("Enter any string:");
	gets(str);
	while(str[length]!=0){
		length++;
	}
	middle=length/2;
	for(i=0;i<=middle;i++){
		if(str[i]!=str[length-i-1]){	
		flag=1;
		break;
		}
	}
	
	if(flag==0){
		printf("palindrome",str);
		
	}else{
		printf("Not Palindrome",str);
	}
	getch();
	return 0;
}
