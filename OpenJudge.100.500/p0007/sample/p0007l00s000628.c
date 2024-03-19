#include <stdio.h>

int main(void)
{
	int n, m;
	int i, j;
	int count;
	
	while (scanf("%d", &n) != EOF){
		m = n / 2;
		count = 0;
		
		for (i = 0; i < 10; i++){
			for (j = 0; j < 10; j++){
				if (i + j == m && n != 1){
					count++;
				}
			}
		}
		
		count *= 2;
		if (n == 36){
			count = 1;
		}
		if (n <= 9){
			count += 4;
		}
		printf("%d\n", count);
	}
	
	return (0);
}