#include<stdio.h>
int a=100,b=200;
int func1(int c);
main(){
	int count, c;
	for(count=1;count<=10;++count){
		c=4*count;
		printf("%d",func1(c));
		
	}
}
func1(int x){
	int c;
	c=(x,30)?(a-x):(b+x);
	return(c);
	
}
