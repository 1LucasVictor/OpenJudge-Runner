#include <stdio.h>

int main()
{
//	int in[] = { 6,5,3,1,3,4,3 };
//	int in[] = { 3,4,3,2 };
//	int in[] = { 2,3,4 };
	int data[200000];

//	int n = in[0];
//	int *data = &in[1];
	int n;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	
	int diff = (1 - 10 ^ 9) - 1;
	int min = data[0];
	int min_pos = 0;


	for (i = 1; i < n; i++) {
//		printf("data[%d]=%d\n", i, data[i]);
		if (min > data[i])
		{
			min = data[i];
			min_pos = i;
		}
	}
//	printf("min=%d, min_pos1 = %d\n", min,min_pos);
	if (i == n)
	{
		min = data[0];
		min_pos = 0;
		for (i = 1; i < (n - 1); i++)
		{
			if (min > data[i])
			{
				min = data[i];
				min_pos = i;
			}
		}
	}
//	printf("min = %d,min_pos2 = %d\n",min, min_pos);

	for (i = min_pos + 1; i < n; i++)
	{
		int temp_diff = data[i] - min;
		if (diff < temp_diff ){
			diff = temp_diff;
//			printf("diff=%d\n", diff);
		}
	}
//	printf("result = %d\n", diff);
	printf("%d\n", diff);
}