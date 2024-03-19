#include<stdio.h>

int main(int argc, char **argv)
{
	int k, a, b;
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	
	if (a < k && k < b)
			{
		printf("OK");
	}
	else
	{
		if ((b - a + 1) >= k)
				{
			printf("OK");
		}
		else
		{
			printf("NG");
		}
	}
	
	return 0;
}
