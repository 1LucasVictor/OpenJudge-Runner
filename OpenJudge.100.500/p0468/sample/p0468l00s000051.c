#include <stdio.h>

int main()
{
	char S[4];
	scanf("%s", S);
	if (S[1] == 'B') printf("ARC\n");
	else printf("ABC\n");
	fflush(stdout);
	return 0;
}