#include<stdio.h>
#include<string.h>
int main(){
	char s[22];
	int i;
	fgets(s, 22, stdin);
	s[strlen(s)-1] = '\0';
	for(i = strlen(s)-1; i >= 0; i--){
		putchar(s[i]);
	}
	putchar('\n');
	return 0;
}