#include <stdio.h>          // putchar(), scanf()
#include <string.h>         // strlen()

int
main(int argc, char** argv)
{
	char str[21];
	int i;

	scanf("%s", str);
	for (i = strlen(str) - 1; i >= 0; --i)
		putchar(str[i]);

	putchar('\n');
	return 0;
}