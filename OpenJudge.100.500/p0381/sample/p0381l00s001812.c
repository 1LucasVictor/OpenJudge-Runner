#include <stdio.h>



int main(void)
{
	int n, x;
	int ways = 0;

	while(1){
		ways = 0;
		scanf("%d%d", &n, &x);
		if(n == 0 && x == 0) break;
		for(int a = 1; a <= n; a++){
			for(int b = 1; b < a; b++){
				if(b > a) break;
				for(int c = 1; c < b; c++){
					if(c > b) break;
					int total = a + b + c;
					if(total == x && a != b && b != c){
						// printf("%d %d %d\n", a, b, c);
						 ways++;
					}
				}
			}
		}
		printf("%d\n", ways);
	}

	return 0;

}
