#include <stdio.h>
#include <string.h>

int main(void)
{
	char in, stack[10] = {};
	for (;;) {
		scanf("%d", &in);
		if (in)
			stack[strlen(stack)] = in;
		else {
			if (!stack[0])
				return 0;
			else {
				printf("%d\n", stack[strlen(stack) - 1]);
				stack[strlen(stack) - 1] = 0;
			}
		}
	}
}