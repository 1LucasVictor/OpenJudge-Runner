#include <stdio.h>

int t[1000000];
int main(void)
{
	int n, i, j, count;	
	
	for (i = 2; i * i <= 1000000; i++){
		if (t[i] == 0){
			for (j = 2 * i; j <= 1000000; j++){
				if (j % i == 0){
					t[j] = 1;
				}
			}
		}
	}
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		
		for (i = 2; i <= n; i++){
			if (t[i] == 0){
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}