#include <stdio.h>

int main(void)
{
	int n, counter;
	int i, j;
	
	while(scanf("%d", &n) != EOF){
		counter = 0;
		
		for(i = 2; i <= n; i++){
			for(j = 2; j < i; j++){
				if((i % j) == 0 && i != j){
					counter++;
					break;
				}
			}
		}
		printf("%d\n", (n - counter - 1));
	}
	
	return 0;
}