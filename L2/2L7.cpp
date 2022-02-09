/*WAP to input 5 marks of student and calculate percentage. Based on 
percentage display Division of student.(Above 80%= Distinction, 60%-
79%=First Division, 50%- 59% = Second Division, 40%-49%= Third 
Division, Below 40%= Fail
*/
#include <stdio.h>
#include<conio.h>
main(){
	float a,b,c,d,e,perc,tm;
	printf("Enter the marks of subject a,b,c,d,e:");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	perc=((a+b+c+d+e)/500)*100;
	printf("The percentage is:%f\n",perc);
	if(perc>=80){
		printf("Distinction",perc);
	}else if(perc>=60 && perc<=79){
		printf("first division",perc);
	}else if(perc>=50 && perc<=59){
		printf("second division",perc);
	}
	
	else if(perc>=40 && perc<=49){
		printf("Third division",perc);
	}else{
		printf("Fail",perc);
	}	
	getch();
	return 0;
}

