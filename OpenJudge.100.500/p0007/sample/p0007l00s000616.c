#include<stdio.h>

int main(void){

	int a, b, c, d, n, t;

	while (scanf("%d", &n) != EOF){
		t = 0;
		for (d = 0; d <= 9; d++){
			for (c = 0; c <= 9; c++){
				for (b = 0; b <= 9; b++){
					for (a = 0; a <= 9; a++){
						if (a + b + c + d == n){
							t++;
						}

					}
				}
			}
		}
		printf("%d\n", t);
	}
	return 0;
}