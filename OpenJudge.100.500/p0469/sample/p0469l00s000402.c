#include<stdio.h>

int main()
{
	int k, a, b;
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	int i = 0;
	while(k * ++i <= b)
	{
		if (k * i >= a && k * i <= b) 
		{
			printf("OK\n");
			break;
		}
	}
	if (i * k > b) printf("NG");
	return 0;
}