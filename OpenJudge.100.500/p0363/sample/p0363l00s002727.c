#include<stdio.h>
int main()
{
	int num[3];
	int i, j;
	int tmp;
	for (i = 0; i < 3; i++)
		scanf("%d", &num[i]);
	for(i=0;i<3;i++)
		for(j=i;j<3;j++)
			if (num[i]>num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
	printf("%d %d %d\n", num[0], num[1], num[2]);
	return 0;
}