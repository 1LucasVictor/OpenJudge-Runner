#include <stdio.h>

int main(void)
{
	int i;

	scanf("%d", &i);

	if (i / 100 == 7)
	{
		printf("Yes\n");
		return (0);
	} else if (i%100/10 == 7)
	{
		printf("Yes\n");
		return (0);
	} else if (i%10 == 7)
	{
		printf("Yes\n");
		return (0);
	}
	printf("No\n");
	return (0);
}	