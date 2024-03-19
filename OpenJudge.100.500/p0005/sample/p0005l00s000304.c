#include <stdio.h>
#include <string.h>

int main(void){
	int i;
	char s[24];

	scanf("%s",s);
	for(i=strlen(s)-1;i>=0;i--){
		putchar(s[i]);
	}
	putchar('\n');

	return 0;
}