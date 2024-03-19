#include <stdio.h>

int main()
{
	int n;
	int buf[10];
	int idx = 0;

	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			printf("%d\n", buf[--idx]);
		} else {
			buf[idx++] = n;
		}
	}
	return 0;
}