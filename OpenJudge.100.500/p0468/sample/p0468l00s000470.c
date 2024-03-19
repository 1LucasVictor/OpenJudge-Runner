#include <stdio.h>

int main(){
	
	char s[50];
	
	scanf("%s",s);
	getchar();
	
	s[1]=s[1]+16;
	
	printf("%s",s);
	
	return 0;
}
