#include <stdio.h>
int main() {
	int stack[11];
	int top = 0, n;
	while (scanf(" %d", &n) != EOF) {
		if (n > 0) {
			stack[top++] = n;
		} else if (n == 0) {
			printf("%d\n", stack[--top]);
		}
	}
	return 0;
}