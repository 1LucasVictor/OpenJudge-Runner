#include<stdio.h>
int main(void){
	char s[3], count=0;
	
	scanf("%s", s);
	
	if(s[0] == '1') count++; 
	if(s[1] == '1') count++; 
	if(s[2] == '1') count++; 
	
	printf("%d\n", count);
	return 0;
}