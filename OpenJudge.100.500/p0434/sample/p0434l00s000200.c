#include <stdio.h>
#include <stdlib.h>

void	ft_check(int temp)
{
	if (temp >= 30)
		printf("Yes");
	else
		printf("No");
}

int		main(void)
{
	int temp;

	scanf("%d",&temp);
	ft_check(temp);
	return (0);
}