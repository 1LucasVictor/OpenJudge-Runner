#include <stdio.h>

int main(void)
{
	int a[100000];
	int max;
	int i, j, k;
	k = 0;
	
	while (scanf("%d", &max) != EOF){
	
	for (i = 0; i <= max; i++){
		a[i] = 1;
		a[0] = 0;
	}
	
	for (i = 1; i < 1000; i++){
		if (a[i] == 1){
			for (j = (i + 1); (i + 1) * j <= max; j++){
				a[(i + 1) * j - 1] = 0;
			}
		}
	}
	
	for (i = 0; i < max; i++){
		if (a[i] == 1){
			k++;
		}
	}
	
	printf("%d\n", k);
	k = 0;
	}
	
	return (0);
}