#include <stdio.h>

int count;

int kiten(int n);

int main(void)
{
	int n;
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		kaiten(n);
	}
	
	return (0);
}

int kaiten(int n)
{
	int i, j, k, l;
	int sum;
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			for (k = 0; k < 10; k++){
				for (l = 0; l < 10;l++){
					sum = i + j + k + l;
					if (sum == n){
						count++;
					}
				}
			}
		}
	}
	printf("%d\n", count);
	return (0);
	
}