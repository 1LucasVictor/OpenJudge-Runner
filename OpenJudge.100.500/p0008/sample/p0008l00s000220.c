#include <stdio.h>

int prime[1000000];

int main(void)
{
	int i, j;
	int n;
	int c;
	
	for (i = 0; i < 1000000; i++){
		prime[i] = 1;
	}
	
	prime[0] = 0;
	prime[1] = 0;
	
	for (i = 2; (i * i) < 1000000; i++){
		if (prime[i] == 1){
			for (j = 2; (i * j) < 1000000; j++){
				prime[(i * j)] = 0;
			}
		}
	}
	
	
	while (scanf("%d", &n) != EOF){
		c = 0;
		for (i = 0; i <= n; i++){
			if (prime[i] == 1){
				c++;
			}
		}
		printf("%d\n", c);
	}
	
	
	
	return (0);
}