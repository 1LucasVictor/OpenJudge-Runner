#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int count;
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		if (n >= 8 || n == 7){
			for (i = 8; i <= n; i++){
				if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
					count++;
				}
			}
			count += 4;
		}
		else if (n == 0 || n == 1){
			count = 0;
		}
		else if (n == 2){
			count = 1;
		}
		else if (n == 3 || n == 4){
			count = 2;
		}
		else if (n == 5 || n == 6){
			count = 3;
		}
		printf("%d\n", count);
	}
	return (0);
}