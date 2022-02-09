//. WAP to find whether the given character is Uppercase, Lowercase, digit or Symbol..
#include<stdio.h>
#include<conio.h>
 main(){
 	char ch;
 	printf("Enter any character:");
 	scanf("%c",&ch);
 	if(ch>65 && ch<=90){
 		printf("It %c Uppercase:",ch);
 	}else if(ch>=99 && ch<=122){
 		printf("it is lowercase",ch);
	 }else if(ch>=48 && ch<=58){
	 	printf("It is digit",ch);
	 }else{
	 	printf("It is special symbol",ch);
	 }
	 
getch();
return 0;
}
