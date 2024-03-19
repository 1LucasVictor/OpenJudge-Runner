#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int n;
	int kai;
	
	while (scanf("%d", &n) != EOF){
	kai = 0;
	
	for (a = 0; a <= 9; a++){
		for (b = 0; b <= 9; b++){
			for (c = 0; c <= 9; c++){
				for (d = 0; d <= 9; d++){
					if (a + b + c + d == n) kai++;
				}
			}
		}
	}
	printf("%d\n", kai);
	}
	return (0);
}