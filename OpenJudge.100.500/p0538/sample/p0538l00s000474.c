#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	while(scanf("%d %d",&a, &b) != EOF)
	{
		if(1 <= a && a <= 9 && 1 <= b && b <= 9)
			printf("%d\n",a * b);
		else
			printf("-1\n");
		
	}
	return 0;
}