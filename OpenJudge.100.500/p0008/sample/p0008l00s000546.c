#include <stdio.h>

int main(void)
{
	int n;
	int prime;
	int i;
	
	while (scanf("%d", &n) != EOF){
		prime = 0;
		for (i = 1; i <= n; i++){
			if (i == 1){
				prime--;
			}
			if (i == 2 || i == 3 || i == 5 || i == 7){
				prime++;
			}
			if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
				prime++;
			}
		}
		printf("%d\n", prime);
	}
	
	return (0);
}