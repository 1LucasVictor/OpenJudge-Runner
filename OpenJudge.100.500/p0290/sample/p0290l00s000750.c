#include<stdio.h>

int main()
{
	int i, j;
	int num;
	int t;
	int flag = 0;
	int count = 0;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++)
	{
		scanf("%d", &t);
		
		for(j = 2; j <= t/2; j++)
		{
			if(t % j == 0) flag = 1;
		}
		if(flag == 0 && t != 1) count++;
		flag = 0;
	}
	printf("%d\n", count);
	
	return 0;
}