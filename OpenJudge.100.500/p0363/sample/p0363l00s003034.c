#include <stdio.h>

int main(void)
{
	int num[3];
	int temp;

	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for(int i = 0;i < 2;i++)
		for(int j = i + 1;j < 3;j++)
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
	printf("%d %d %d\n", num[0], num[1], num[2]);

	return 0;
}