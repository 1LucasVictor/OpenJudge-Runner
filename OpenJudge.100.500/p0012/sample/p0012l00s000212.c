// Aizu Vol0 0013: Switching Railroad Cars
// 2017.7.28

#include <stdio.h>

#define MAX 100

int main()
{
	int n;
	int stack[MAX + 5], top;
	
	top = 0;
	while (scanf("%d", &n) == 1) {
		if (n == 0) printf("%d\n", stack[--top]);
		else stack[top++] = n;
	}
	return 0;
}