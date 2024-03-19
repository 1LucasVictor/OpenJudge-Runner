#include<stdio.h>
int main(){
	char s[9];
	scanf("%s",s);
	s[1]^='B'^'R';
	puts(s);
}