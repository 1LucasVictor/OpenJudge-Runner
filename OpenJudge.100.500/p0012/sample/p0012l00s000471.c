#include <stdio.h>

int main() {
	int in, count = 0;
	int stack[10];

	while (scanf("%d", &in) != EOF) {
		if (in == 0) printf("%d\n", stack[--count]);
		else stack[count++] = in;
	}
	return 0;
}