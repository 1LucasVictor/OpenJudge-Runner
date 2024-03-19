#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int nums[200000] = {};
	int index = 0;

	scanf("%d", &index);
	if (!(2 <= index && index <= 200000))
	{
		printf("NO\n");
		return 0;
	}	
	int tmp = 0;
	for (int* i = nums; i < (nums + index); i++)
	{
		scanf("%d", &tmp);
		(*i) = tmp;
	}
	for (int* i = nums; i < (nums + index); i++)
	{
		for (int* j = i + 1; j < (nums + index); j++)
		{
			if ((*i) == (*j))
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}