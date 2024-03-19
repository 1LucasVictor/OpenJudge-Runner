#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int j;
	int count;
	int flag;
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		if (n >= 2){
			count++;
		}
		
		for (i = 3; i <= n; i++){
			for (j = 2; j < i; j++){
				flag = 0;
				if (i % j == 0){
					flag = 1;
					break;
				}
			}
			if (flag == 0){
				count++;
			}
		}
		
		
		
		printf("%d\n", count);
	}
	
	return (0);
}