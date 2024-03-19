#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[4];
	char abc[] = "ABC";
	char arc[] = "ARC";

	scanf("%s", &s);

	if (strcmp(s, abc) == 0)
	{
		printf("%s\n",arc);
	}
	else
	{
		printf("%s\n", abc);
	}

	return 0;
}