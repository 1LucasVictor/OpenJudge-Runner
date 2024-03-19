#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int n;
	int count;
	static char num[1000001];
	
	num[2] = 1;
	for (i = 3; i < 1000000; i += 2){
		num[i] = 1;
	}
	for (i = 3; i < 1000; i += 2){
		if (num[i] == 1){
			for (j = 3; j <= 1000000 / i; j += 2){
				num[i * j] = 0;
			}
		}
	}
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		for (i = 2; i <= n; i++){
			if (num[i] == 1){
				count++;
			}
		}
		
		printf("%d\n", count);
	}
	
	return (0);
}