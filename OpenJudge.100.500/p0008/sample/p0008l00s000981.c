#include <stdio.h>

int p[1000000];

int main()
{
	int n;
	int i, j;
	
	for (i = 2; i < 1000000; i++){
		p[i] = 1;
	}
	
	for (i = 2; i * i < 1000000; i++){
		for (j = i * i; j < 1000000; j += i){
			p[j] = 0;
		}
	}
	
	for (i = 1; i < 1000000; i++){
		p[i] += p[i - 1];
	}
	
	while (scanf("%d", &n) != EOF){
		printf("%d\n", p[n]);
	}
	
	return (0);
}