//search an element in 1D array containing five integers
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i;
	int count;
	int num;
	printf("Enter the array element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the a[%d] element",i);
		scanf("%d",&a[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++){	
	   count=0;
		num = a[i];
		while(a[i]!=0){
			count=count+1;
			a[i]/=10;
		}
		if(count==5){
			printf("\nThe five digit no are %d\n",num);
		}
	}
	getch();
	return 0;
}
