#include <stdio.h>

int main(void)
{
	int n, x, i, j, k, a;
	char s;
	
	while(1){
		scanf("%d%d", &n, &x);
		if((n == 0) && (x == 0)) break;
		
		a = 0;
		for(i = 1; i <= (n - 2); i++){
			for(j = (i + 1); j <= (n - 1); j++){
				for(k = (j + 1); k <= n; k++){
					if((i + j + k) == x) a++;
				}
			}
		}
		printf("%d\n", a);
	}
	
	return(0);
}

