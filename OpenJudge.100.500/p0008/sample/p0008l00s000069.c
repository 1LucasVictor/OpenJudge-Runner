#include <stdio.h>
#define MAX 1000000

int prime[MAX];

int main(void)
{
	int i;
	int j;
	int n;
	int count;
	
	for (i = 2; i < MAX; i++){
		prime[i] = 1;
	}
	
	for (i = 2; i * i < MAX; i++){
		if(prime[i]){
			for (j = i * i; j < MAX; j += i){
				prime[j] = 0;
			}
		}
	}
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		for (i = 0; i <= n; i++){
			count += prime[i];
		}
		printf("%d\n", count);
	}
	
	return (0);
}