#include <stdio.h>

int main () {
	char s[10];
	scanf("%s", &s);
	if ( s[1] == 'B') {
		printf("ARC\n", s);
	}
	
	else {
		printf("ABC\n", s);
	}
	return 0;
}