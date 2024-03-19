#include <stdio.h>
#include <unistd.h>

int		main()
{
	int		N, i, r;
	int		nums[1001];

	i = 0;
	scanf("%d\n", &N);
	while (i >= 0)
	{
		r = scanf("%d ", &nums[i]);
		if (r == EOF)
			break ;
		i++;
	}
	nums[i] = 0;
	i = 0;
	while (nums[i])
	{
		if (nums[i] % 2 == 0 && nums[i] % 3 != 0 && nums[i] % 5 != 0)
		{
			printf("DENIED\n");
			return (0);
		}
		i++;
	}
	printf("APPROVED\n");
	return (0);
}
