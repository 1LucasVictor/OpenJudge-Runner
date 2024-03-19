#include <stdio.h>

int main(void)
{
	int n, counter;
	int a, b, c, d;
	
	while(scanf("%d", &n) != EOF){
		counter = 0;
		
		for(a = 0; a < 10; a++){
			for(b = 0; b < 10; b++){
				for(c = 0; c < 10; c++){
					for(d = 0; d < 10; d++){
						if(n == (a + b + c + d))
							counter++;
					}
				}
			}
		}
		
		printf("%d\n", counter);
	}
	
	return 0;
}