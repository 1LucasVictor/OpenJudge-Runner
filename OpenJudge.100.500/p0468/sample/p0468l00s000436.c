#include <stdio.h>


int main(){
	char s[4];
	scanf("%s",s);
	if(s[1]=='B'){
		puts("ARC");
	}
	else if(s[1]=='R'){
		puts("ABC");
	}
	return 0;
}