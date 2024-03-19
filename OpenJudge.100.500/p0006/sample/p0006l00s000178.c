#include<stdio.h>
int Debt(int n);
int main()
{
	int i = 0;
	int temp = 0;
	int k;
	int n;
	int sum = 100000;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		k = (int)(sum*0.05)%1000;
		if (k != 0)
		{
			temp = 1000;
		}
		else{
			temp = 0;
		}
		sum += sum*0.05+temp-k;
	}
	printf("%d\n", sum);
}