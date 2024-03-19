#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int nums[200000] = {};
	int index = 0;

	scanf("%d", &index);
	if (index > 200000)
	{
		printf("NO\n");
		return 0;
	}

	int tmp = 0;
	for (int i = 0; i < index; i++)
	{
		scanf("%d", &tmp);
		if (tmp > 1000000000)
		{
			printf("NO\n");
			return 0;
		}
		if (!nums[tmp])
		{
			 nums[tmp] = 1;
		}
		else
		{
			printf("NO\n");
			return 0;
		}
		tmp = 0;
	}
	printf("YES\n");
	return 0;
}