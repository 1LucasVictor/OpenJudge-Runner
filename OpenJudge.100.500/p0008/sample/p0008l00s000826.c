#include <stdio.h>

char pn[1000000];

int prime(int x)
{
	int i;
	
	if (x < 2){
		return (0);
	}
	if (x == 2){
		return (1);
	}
	if (x % 2 == 0){
		return (0);
	}
	
	for (i = 3; i * i <= x; i += 2){
		
		if (x % i == 0){
			return (0);
		}
	}
	return (1);
}


int main(void)
{
	int n, i, ps;
	
	for (i = 0; i < 1000000; i++){
		if (prime(i) == 1){
			pn[i] = 1;
		}
	}
	
	
	while (scanf("%d", &n) != EOF){
		
		ps = 0;
		
		for (i = 0; i <= n; i++){
			ps += pn[i];
		}
		printf("%d\n", ps);
	}
	
	return (0);
}