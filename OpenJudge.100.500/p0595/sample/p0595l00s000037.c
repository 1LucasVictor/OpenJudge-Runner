#include <stdio.h>
int main()
{
	int a, b, k;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &k);

	int i, count = 0, answer;

	for(i = 1;i < 101; i++)
	{
		if(a % i == 0 && b % i == 0)
		{
			count++;
		}
		if(count == k)
		{
			answer = i;
			break;
		}
	}

	printf("%d\n", answer);

	return 0;
}