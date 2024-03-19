#include<stdio.h>

int main(void)
{
	int a[2];
	int Count;
	int i[3];
	while (1)
	{
		Count = 0;
		scanf("%d %d", &a[0], &a[1]);
		if (a[0] == 0 && a[1] == 0)
		{
			break;
		}
		for (i[0] = 1; i[0] <= a[0]; i[0]++)
		{
			for (i[1] = i[0]; i[1] <= a[0]; i[1]++)
			{
				for (i[2] = i[1]; i[2] <= a[0]; i[2]++)
				{
					if (i[0] != i[1] && i[1] != i[2] && i[0] != i[2])
					{
						if (i[0] + i[1] + i[2] == a[1])
						{
							Count = Count + 1;
						}
					}

				}
			}
		}
		printf("%d\n", Count);
	}
}
