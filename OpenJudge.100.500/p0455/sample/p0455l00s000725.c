#include <stdio.h>
#include <math.h>
#define MAX 3
int main()
{
	int sum = 0;
	int a;
	scanf("%d", &a);
	for (int i = 0; i < MAX; i++)
	{
		sum += pow(a,i+1);
	}
	printf("%d\n", sum);
	return 0;
}
