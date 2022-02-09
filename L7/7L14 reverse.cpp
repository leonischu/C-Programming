#include<stdio.h>
#include<conio.h>
int main(){
int a[100],size, i, osum=0, esum=0;
printf("Enter the size of array:");
scanf("%d",&size);
//input array
for(i=0;i<size;i++){
printf("Enter a[%d] element:",i);
scanf("%d",&a[i]);
}
//output array in reverse order
printf("The array elements are:\n");
for(i=size-1;i>=0;i--){
	printf("%d\t",a[i]);
}

getch();
return 0;
}
