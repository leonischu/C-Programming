//5. WAP to print the elements of an array present on odd position.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the a[%d] array element:",i);
	scanf("%d",&a[i]);	
	}

		printf("The entered array present in odd position are:\n",n);
     for(i=1;i<n;i=i+2){
    		printf("%d\t",a[i]);
	}
		
		
	
	
	
	getch();
	return 0;
	
}
