#include <stdio.h>
#include <stdlib.h>

int *
read_nums(int n_nums)
{
	int i;
	int *nums = (int *)malloc(n_nums * sizeof(int));

	for (i = 0; i < n_nums; i++)
	{
		scanf("%d", &nums[i]);
	}

	return nums;
}

void 
dump_reversed_nums(int *nums, int n_nums)
{
	int i;

	for (i = 0; i < n_nums; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%d", nums[n_nums-i-1]);
	}
	putchar('\n');
}

int
main()
{
	int n_nums;
	scanf("%d", &n_nums);

	int *nums = read_nums(n_nums);
	dump_reversed_nums(nums, n_nums);

	return 0;
}