#include<stdio.h>
#include<string.h>
int main(){
	char s[9];
	scanf("%s",s);
	puts(strcmp(s,"AAA")&&strcmp(s,"BBB")?"Yes":"No");
}