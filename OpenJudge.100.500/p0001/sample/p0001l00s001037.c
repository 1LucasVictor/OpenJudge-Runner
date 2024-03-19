#include <stdio.h>

int main()
{
	unsigned int a   = 0;
	unsigned int b   = 0;
	unsigned int len = 0;
	char buff[8] = {0};

	while ( scanf("%d %d", &a, &b) != EOF )
	{
		len = sprintf(buff,"%d", a+b);
		printf("%d\n", len);
	}
	
	return 0;
}