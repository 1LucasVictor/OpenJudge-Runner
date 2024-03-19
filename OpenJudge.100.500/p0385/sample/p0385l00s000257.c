#include<stdio.h>
int main(void)
{
	int i, j;
	char n[100000] = { 0 };
	int  x[1001] = { 0 };

	i = 0;
	j = 0;

	while (1) {
		scanf("%c", &n[i]);
		if (n[i] == '0' && n[i - 1] == '\n' || n[0] == '0') {
			break; 
		}

		if (n[i] >= '1' && '9' >= n[i] && n[i] != '\n') {
			x[j] += n[i] - 48;
		}

		if (n[i] == '\n') {
			j = j + 1;
		}
		i = i + 1;
	}

	for (i = 0; i < j; i++) {
		printf("%d", x[i]);
		printf("\n");
	}

	return(0);
}
