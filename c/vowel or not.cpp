#include <stdio.h>
int main(){
	char letter;
	printf("Enter character:");
	scanf("%c",&letter);
	int isUpperCaseVowel,isLowerCaseVowel;
	
	isLowerCaseVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
	isUpperCaseVowel = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

if(isLowerCaseVowel || isUpperCaseVowel){
	printf("%c is vowel.",letter);
}else{
	printf("%c is not vowel.",letter);
}


	return 0;
}
