#include<stdio.h>
#include<math.h>

int main(void)
{
	int a, b, sum, out;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		sum = a + b;
		out = (int)log10((float)sum) + 1;
		printf("%d\n",out);
	}
	return 0;
}