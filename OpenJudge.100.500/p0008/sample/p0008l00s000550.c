#include <stdio.h>

int prime[1000000];
int main(void)
{
	int i, j;
	int n;
	int s;
	
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
		s = 0;
		for (i = 2; i <= n; i++){
			if (prime[i] == 1){
				s++;
			}
		}
		printf("%d\n", s);
	}
	
	return (0);
}