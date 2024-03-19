#include<stdio.h>
char c2d(char c);
int main(void)
{
	int num;
	int i,s=0;
	int ans = 0;
	char input[201];
	int nums[100];
	scanf("%d",&num);
	scanf("%s", input);
	for ( i = 0; input[i]; i++)
	{
		if (input[i] == ' ')
		{
			continue;
		}
		nums[s] = c2d(input[i]);
		s++;
	}
	for (i = 0; i < num; i++)
	{
		if (nums[i] % 2 == 1)
		{
			continue;
		}
		if (nums[i] % 3 == 0 || nums[i] % 5 == 0)
		{
			continue;
		}
		ans++;
	}
	if (ans == 0)
	{
		printf("APPROVED\n");
	}
	else
	{
		printf("DENIED\n");
	}
	return 0;
}

char c2d(char c)
{
	return c - '0';
}