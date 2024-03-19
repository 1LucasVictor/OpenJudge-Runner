#include<stdio.h>
int main() {
	int a, b, sum[20000];
	int i,j;
	char op;

	i = 0;
	while (1) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == '+') {
			sum[i] = a + b;
		}
		else if (op == '-') {
			sum[i] = a - b;
		}
		else if (op == '*') {
			sum[i] = a * b;
		}
		else if (op == '/') {
			sum[i] = a / b;
		}
		else {
			break;
		}
		i++;
	}
	for (j = 0;j < i;j++) {
		printf("%d\n", sum[j]);
	}
	return 0;
}
