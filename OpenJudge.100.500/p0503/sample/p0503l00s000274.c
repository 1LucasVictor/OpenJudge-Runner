#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int nums[200000] = {};
	int index = 0;

	scanf("%d", &index);
	if (2 <= index && index <= 200000)
	{
		int tmp = 0;
		for (int i = 0; i < index; i++)
		{
			scanf("%d", &tmp);
			for (int j = 0; j < i; j++)
			{
				if (tmp == nums[j])
				{
					printf("NO\n");
					return 0;
				}
			}
			nums[i] = tmp;
			tmp = 0;
		}
		printf("YES\n");
		return 0;
	}	
	printf("NO\n");
	return 0;
}