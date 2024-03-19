#include <stdio.h>

#define ARRAY_LEN 4

int
main(void)
{
	char s[ARRAY_LEN];
	int i, res = 0;

	scanf("%s", s);

	for (i = 0; i < 3; i++)
		if (s[i] == '1')
			res++;
	printf("%d\n", res);
	return (0);
}