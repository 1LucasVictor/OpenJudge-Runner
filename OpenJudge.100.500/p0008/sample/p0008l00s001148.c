#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int j;
	int flag = 0;
	int count;
	
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		if (n > 2){
			count++;
		}
		for (i = 3; i <= n; i += 2){
			for (j = 3; j < i;j += 2){
				if (i%j == 0){
					flag = 1;
					break;
				}
			}
			if (flag == 0){
				count++;
			}
			flag = 0;
		}
		printf("%d\n", count);
	}
	
	
	return (0);
}