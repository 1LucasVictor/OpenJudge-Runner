#include <stdio.h>

int main(void)
{
	int N;
	int A;
	int i;
	int flag;

	scanf("%d", &N);
	flag = 1;
	i = 0;
	while (i < N)
	{
		scanf("%d", &A);
		if (A % 2 == 0 && A % 3 != 0 && A % 5 != 0)
			flag = 0;
		i++;
	}
	if (flag)
		printf("APPROVED");
	else
		printf("DENIED");
}