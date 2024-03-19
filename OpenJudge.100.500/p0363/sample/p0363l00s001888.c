#include<stdio.h>

int main()
{
	int num[3];
	scanf("%d%d%d",&num[0] ,&num[1] ,&num[2]);
	for (int i = 0 ; i < 2; i++ )
	{
		for(int j = i + 1 ; j<=2 ; j++)
		{
			if (num[i] > num[j])
			{
			int p = num[i];
			num[i] = num[j];
			num[j] = p;
			}
			
		}
	}
	printf("%d %d %d\n",num[0],num[1],num[2]);
	return 0;
}
