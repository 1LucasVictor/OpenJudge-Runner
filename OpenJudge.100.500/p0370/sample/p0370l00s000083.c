#include <stdio.h>
#define NUM 20000
int main(void)
{
	int a[NUM];
	int b[NUM];
	char op[NUM];
	int i,j;

	for (i = 0; i < NUM; i++){
		scanf("%d %c %d", &a[i], &op[i], &b[i]);
		if (op[i] == '?')break;
	}

	for (j = 0; j < NUM; j++){
		if (op[j] == '?')break;
		switch (op[j])
		{
		case '+':
			printf("%d\n", a[j] + b[j]);
			break;
		case '-':
			printf("%d\n", a[j] - b[j]);
			break;
		case '*':
			printf("%d\n", a[j] * b[j]);
			break;
		case '/':
			printf("%d\n", a[j] / b[j]);
			break;
		default:
			break;
		}
	}

	return 0;
}