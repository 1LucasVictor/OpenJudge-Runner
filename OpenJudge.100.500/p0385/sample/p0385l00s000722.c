#include <stdio.h>

int GetSum(char num[]);

int main(void)
{
	int sum;
	char num[1001];
	
	while(1)
	{
		scanf("%s", num);
		if(num[0] == '0') break;
		sum = GetSum(num);
		printf("%d\n", sum);
	}
	
	return 0;
}

int GetSum(char num[])
{
	int i = 0, sum = 0;
	
	while(num[i])
	{
		sum += num[i] - '0';
		i++;
	}
	return sum;
}