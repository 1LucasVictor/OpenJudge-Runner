#include<stdio.h>
int main(void){
	int n = 0;
	char s[3];
	scanf("%s",&s);
	if(s[0] == '1') ++n;
	if(s[1] == '1') ++n;
	if(s[2] == '1') ++n;
	printf("%d",n);
	 return 0;
}	 
