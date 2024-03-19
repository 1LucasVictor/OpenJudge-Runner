#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c, d;
	int kazu = 0;
	int hanbetsu = 0;
	
	while (scanf("%d", &n) != EOF){
		for (a = 0; a != 10; a++){
			for (b = 0; b != 10; b++){
				for (c = 0; c != 10; c++){
					for (d = 0; d != 10; d++){
						if ((a + b+ c + d) == n){
							kazu++;
						}
					}
				}
			}
		}
		
		printf("%d\n", kazu);
		kazu = 0;
	}
	
	return (0);
}