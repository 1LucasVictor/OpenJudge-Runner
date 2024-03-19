#include<stdio.h>
int main(void){
	char s[5];
	scanf("%s",s);
	
	if(s[0]==s[1])
	puts("Bad");
	
	else if(s[1]==s[2])
	puts("Bad");
	
	else if(s[2]==s[3])
	puts("Bad");
	
	else
	puts("Good");
	
	return 0;
}