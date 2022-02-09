//To find largest and smallest no from the list of 100 given  numbers
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],i,n,large,small;
	
	for(i=0;i<5;++i){
	
	printf("Enter the array element:\n");
	scanf("%d",&a[i]);
	}
	large=small=a[0];
	for(i=1;i<5;++i){
		if(a[i]>large){
			large=a[i];
		}
		if(a[i]<small){
			small=a[i];
		}
	}
	printf("The largest element is:%d",large);
	printf("The smallest element is:%d",small);
	
getch();
return 0;
}
