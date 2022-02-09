//break:break the entire loop; continue: bypass
#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	for(i=1; i<=100; i++){
		if(i==10){
			continue;
		}
		printf("%d\n",i);
	
	}
	return 0;
}
