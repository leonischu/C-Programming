#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i,j,t;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter a[%d] elements",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			
			if(a[j]>a[j+1]){
			
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		}
	}
	printf("array after sorting:");
	for(i=0;i<n;i++){
	
	printf("%d",a[i]);
}
	getch();
	return 0;
}
