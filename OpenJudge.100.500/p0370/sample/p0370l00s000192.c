#include <stdio.h>


int main(void)
{
	char op[10];
	int  i = 0, j;
	int a[10000];
	int b[10000];
	int  ops[10000];
	do{
		scanf("%d%s%d", &a[i], op, &b[i]);
		
		ops[i] = op[0];
		i++;
	

	} while (op[0] != '?');
	for (j = 0; j < i - 1; j++){
		if (ops[j] == '+') printf("%d\n", a[j] + b[j]);
		if (ops[j] == '-') printf("%d\n", a[j] - b[j]);
		if (ops[j] == '*') printf("%d\n", a[j] * b[j]);
		if (ops[j] == '/') printf("%d\n", a[j] / b[j]);

	
	}

	return 0;
}