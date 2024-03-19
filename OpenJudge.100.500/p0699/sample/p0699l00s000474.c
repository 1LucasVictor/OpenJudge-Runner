#include <stdio.h>

int		main(void)
{
	int		ABC[3];
	int		count7;
	int		count5;

	count7 = 0;
	count5 = 0;
	scanf("%d %d %d",&ABC[0], &ABC[1], &ABC[2]);
	for (int i = 0; i < 3; i++)
	{
		if (ABC[i] == 7)
			count7++;
		else if (ABC[i] == 5)
			count5++;
	}
	if (count5 == 2 && count7 == 1)
		printf("YES");
	else
		printf("NO");
	return (0);
}
