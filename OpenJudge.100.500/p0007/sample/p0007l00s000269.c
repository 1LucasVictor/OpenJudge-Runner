#include <stdio.h>

int main(void)
{
	int n, i, j, k, l, re = 0;
	while (scanf("%d", &n) != EOF){
		re = 0;
		for (i = 0; i <= 9; i++){
			for (j = 0; j <= 9; j++){
				for (k = 0; k <= 9; k++){
					for (l = 0; l <= 9; l++){
						if (n == i + j + k + l) re++;
					}
				}
			}
		}
	printf("%d\n", re);
	}

	return (0);
}