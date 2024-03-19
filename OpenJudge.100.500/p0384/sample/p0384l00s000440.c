#include <stdio.h>
#define SIZE 1200

int main(void)
{
	int i, c;

	for (i = 0; i < SIZE; i++)
	{
		c = getchar();		
		if (c == '\n')
			break;
		else if (c >= 'A' && c <= 'Z')
			c = c + 'a' - 'A';
		else if (c >= 'a' && c <= 'z')
			c = c + 'A' - 'a';
		putchar(c);
	}
	putchar('\n');
	return 0;
}