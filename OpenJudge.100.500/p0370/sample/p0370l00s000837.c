#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[100], b[100], i = 0;
	char op[100][2];
	
	do {
		scanf("%d %s %d", &a[i], op[i], &b[i]);
	} while (strcmp(op[i++], "?"));
	
	i = 0;
	
	while (strcmp(op[i], "?")) {
		if (strcmp(op[i], "+") == 0)
			printf("%d\n", a[i] + b[i]);
		else if (strcmp(op[i], "-") == 0)
			printf("%d\n", a[i] - b[i]);
		else if (strcmp(op[i], "*") == 0)
			printf("%d\n", a[i] * b[i]);
		else if (strcmp(op[i], "/") == 0)
			printf("%d\n", a[i] / b[i]);
		i++;
	}
	
	return 0;
}