#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int a[6];
	int i,j;
	for (i = 0;i < 6;i++)scanf("%d", &a[i]);
	for(j=0;j<5;j++)
	{
		for (i = 1;i<5;i++)
		{
			if ((a[i] - a[j]) > a[5])
			{
				printf(":(\n");
				return 0;
			}
		}
	}
	printf("Yay!\n");
	return 0;
}