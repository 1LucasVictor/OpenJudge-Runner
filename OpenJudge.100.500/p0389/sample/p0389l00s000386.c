#include <stdio.h>          // printf(), scanf(), getc(), ungetc()
#include <string.h>         // memcpy()
#include <stdbool.h>

#define MAX_L 200
const char NUL = '\0';

bool
ope_line()
{
	char s[MAX_L + 1];
	char t[MAX_L + 1];
	int len;
	int n, h;
	int i;
	int c;

	c = getc(stdin);
	len = 0;
	while (c != '\n' && c != EOF)
	{
		s[len++] = c;
		c = getc(stdin);
	}

	s[len] = NUL;
	if (s[0] == '-' && len == 1)
		return false;

	ungetc(c, stdin);
	scanf("%d\n", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d\n", &h);
		memcpy(t, s, h);
		memcpy(s, &s[h], len - h);
		memcpy(&s[len - h], t, h);
		s[len] = NUL;
	}

	printf("%s\n", s);
	return true;
}

int
main(int argc, char** argv)
{
	while (true)
	{
		if (!ope_line())
			break;
	}

	return 0;
}