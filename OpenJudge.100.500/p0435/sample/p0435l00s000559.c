#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int N, D2, x, y;
	int i;
	int result;
	char buf[256], *ch;

	fgets(buf, sizeof(buf), stdin);
	ch = strtok(buf, " ");
	N = atoi(ch);
	ch = strtok(NULL, " ");
	D2 = atoi(ch);
	D2 = D2 * D2;

	result = 0;

	for(i = 0; i < N; i += 1) {
		fgets(buf, sizeof(buf), stdin);
		ch = strtok(buf, " ");
		x = atoi(ch);
		ch = strtok(NULL, " ");
		y = atoi(ch);
		if(x * x + y * y <= D2) {
			result += 1;
		}
	}

	printf("%d\n", result);
	return 0;
}
