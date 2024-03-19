#include<stdio.h>

int main()
{
	int data = 1, n, num, i, j,count,warikiri;
	while (scanf("%d", &n) != EOF){
		if (1 <= n&&n <= 999999){
			num = n;
			count = 0;
			warikiri = 0;
			for(i = 2; i <= num; i++){
				for (j = 1; j <= i; j++){
					if (i%j == 0)
						warikiri++;
				}
				if (warikiri == 2)
					count++;
				warikiri = 0;
			}
			printf("%d\n", count);
		}
		data++;
		if (data == 31)
			break;
	}
	return 0;
}