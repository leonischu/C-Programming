#include<stdio.h>
#include<conio.h>
int main(){
	int mark[2][4] = {{45,234,2,3},
	                  {3,2,3,3}};
	for(int i=0;i<2;i++)
		{	
	for(int j=0;j<2;j++)
	{
	//printf("Enter the value of %d,%d element:\n",i);
	printf("Enter the value of a[%d],\n",i,j);
	scanf("%d",&mark[i][j]);
}
}
	for(int i=0;i<2;i++){	
		for(int j=0;j<4;j++){

//	printf(" The value of %d,%d element:%d\n",i,j,mark[i][j]);
printf("%d ",mark[i][j]);

}
printf("\n");
}
getch();
return 0;
}



