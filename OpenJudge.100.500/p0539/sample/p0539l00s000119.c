#include<stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for(int i = 1; i <= 9; i++)
		if((N%i == 0) && (1<=N/i && N/i<=9))
		{
			printf("Yes\n");
			return 0;
		}
	printf("No\n");
	return 0;
}