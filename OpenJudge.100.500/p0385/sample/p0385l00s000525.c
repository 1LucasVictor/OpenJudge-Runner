#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[1001];
	int i=0;
	int x=0;
	
	for (;;)
	{
		x=0;
		scanf("%s", a);
		
		if (!strcmp(a, "0"))
		{
			return 0;
		}
		
		for (i=0;i<1000;i++)
		{
			if (a[i]==0)
			{
				break;
			}

			x+=a[i]-'0';
		}

		printf("%d\n", x);
	}
	return 0;
}