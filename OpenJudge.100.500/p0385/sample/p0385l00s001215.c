#include <stdio.h>

int main(void)
{
	int num, sum[1000], i, j;
	
	for(i = 0; ; i++)
	{
		scanf("%d", &num);
		if(num == 0) break;
		sum[i] = 0;
		
		while(1)
		{
			sum[i] += num%10;
			num /= 10;
			if(num == 0) break;
		}
	}
	
	for(j = 0; j < i; j++) printf("%d\n", sum[j]);
	
	return 0;
}