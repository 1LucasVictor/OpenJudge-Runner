#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int count = 0;
	int n;
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		if (n <= 36){
			for (a = 0; a <= 9; a++){
				for (b = 0; b <= 9; b++){
					for (c = 0; c <= 9; c++){
						d = n - (a + b + c);
						
						if (d >= 0 && d <= 9)count++;
					}
				}
			}
		}
		printf("%d\n", count);
	}
	
	return (0);
}