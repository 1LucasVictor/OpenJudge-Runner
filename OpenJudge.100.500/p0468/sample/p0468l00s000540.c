#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
	char s[4];
	scanf("%s", s);
	if (s[1] == 'R')
		printf("ABC\n");
	else if (s[1] == 'B')
		printf("ARC\n");
	return (0);
}