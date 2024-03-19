#include <stdio.h>
#include <string.h>
int main( void ){
	int i;
	char s[21];
	for(i=strlen(fgets(s,21,stdin));i--;putchar(s[i]));
	return puts("");
}