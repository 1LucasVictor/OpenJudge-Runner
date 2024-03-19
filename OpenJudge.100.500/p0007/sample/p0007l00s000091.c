#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int count = 0;
	int n;
	
	while (scanf("%d", &n) != EOF){
		for (a = 0; a <= 9; a++){
			for (b = 0; b <= 9; b++){
				for (c = 0; c <= 9; c++){
					for (d = 0; d <= 9; d++){
						if (a + b + c + d == n){
						//	printf("%d %d %d %d\n", a, b, c, d);
							count++;
						}
					}
				}
			}
		}
		
		printf("%d\n", count);
		count = 0;
	}
	return (0);
}