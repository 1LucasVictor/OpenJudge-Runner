#include <stdio.h>

int main(void)
{
	int n, a, b, c, d, count;
	while(scanf("%d", &n) != EOF){
		count = 0;
		for(a = 0; a < 10; a++){
			if(a > n) break;
			for(b = 0; b < 10; b++){
				if(a + b > n) break;
				for(c = 0; c < 10; c++){
					if(a + b + c > n) break;
					for(d = 0; d < 10; d++){
						if(a + b + c + d == n){
							count++;
							break;
						}
					}
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}