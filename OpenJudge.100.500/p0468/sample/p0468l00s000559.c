#include<stdio.h>

int main(void) {
	char s[4];

	scanf("%s", &s);

	if (s[1] == 'R')
	{
		printf("ABC\n");
	}
	else if (s[1] == 'B')
	{
		printf("ARC\n");
	}
	

	return 0;
}