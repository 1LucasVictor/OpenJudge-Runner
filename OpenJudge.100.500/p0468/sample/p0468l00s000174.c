#include<stdio.h>

int main(void) {
	
	char s[10];

	scanf("%s", s);

	if (s[0] == 'A'&&s[1] == 'B'&&s[2] == 'C') printf("ARC");
	else printf("ABC");

	return 0;
}