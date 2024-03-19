#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int i;
	int len, N;
	char aa[100];
	scanf("%s", aa);
	//	printf("%s", aa);
	for (i = 0; i < 3; i++)
	{
		if (aa[i] == '7')
		{
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}
