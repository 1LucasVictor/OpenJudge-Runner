#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
	char s[MAX];
	char c[MAX];
	int k;

	scanf("%s", s);
	scanf("%s", c);

	k = strlen(c);
	
	c[k - 1] = '\0';

	if (strcmp(s, c) == 0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}