#include<stdio.h>
#include<conio.h>
int main(){
int a[100][100],m, n, i, j, sum=0;
printf("Enter the size of row of matrx:");
scanf("%d",&m);
printf("Enter the size of column of matrx:");
scanf("%d",&n);
//input matrix
for(i=0;i<m;i++){
for(j=0; j<n; j++){
printf("Enter a[%d][%d] element:", i, j);
scanf("%d",&a[i][j]);
}
}
//output matrix
printf("\nThe %d*%d matrix is:\n",m, n);
for(i=0; i<m; i++){
for(j=0; j<n; j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
//find sum of only even elements
for(i=0; i<m; i++){
for(j=0; j<n; j++){
if(a[i][j]%2==0){
sum=sum+a[i][j];
}
}
}
printf("\nThe sum even elements is:%d", sum);
getch();
return 0;
}
