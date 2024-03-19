#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int in, stack[10], *p;
	p = stack;
	for (;;) {
		scanf ("%d", &in);
		if (in != 0) {
			*p++ = in;
		} else {
			printf("%d\n", *--p);
			if (p == stack)
				exit(0);
		}
	}
}