#include <stdio.h>

int main(void) {
	int c;
	c=getchar();
	while (c!=EOF)
	{
		if (c>=65 && c<=90)
		{
			c+=32;	
		} else if (c>=97 && c<=122)
		{
			c-=32;
		}
		putchar(c);
		c=getchar();
	}
	return 0;
}