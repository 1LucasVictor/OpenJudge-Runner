#include<stdio.h>




int main()
{
	int a, b, c, k,sum=0;

	scanf("%d %d %d %d", &a, &b, &c, &k);
	
	sum = a;
	k = k - (a + b);
	if (k<=c)
	{
		sum = sum - k;
	}
	
	printf("%d\n", sum);

	return 0;
}