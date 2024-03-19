#include<stdio.h>

int main(void)
{
	int a, b;
	int i, j;
	int result[200];
	int x;
	int n;
	
	i = 0;
	j = 0;
	
	while (scanf("%d %d", &a, &b) != EOF) {
		x = a + b;
		n = 1;
		
		while (x >= 10) {
			x = x / 10;
			n++;
		}
		result[i] = n;
		
		i++;
	}
	
	for (j = 0; j < i; j++) {
		printf("%d\n", result[j]);
	}
	
	return (0);
}