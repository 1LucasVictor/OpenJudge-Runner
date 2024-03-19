#include <stdio.h>

int main(void)
{
	int count;
	int a, b, c, d;
	int n;
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		for (d = 0; d <= 9; d++){
			for (c = 0; c <= 9; c++){
				for (b = 0; b <= 9; b++){
					for (a = 0; a <= 9; a++){
						if (a + b + c + d == n){
							count++;
						}
					}
				}
			}
		}
		
		printf("%d\n", count);
	}
	
	return (0);
}