#include <stdio.h>

int main(void) {
	char s[20];
	scanf("%s",s);
	int n=strlen(s);
	int i;
	for(i=n-1;i>=0;i--) {
		printf("%c",s[i]);
	}
	return 0;
}