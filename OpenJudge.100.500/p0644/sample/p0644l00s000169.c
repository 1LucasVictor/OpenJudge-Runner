#include <stdio.h>
#include <string.h>

int main (int argc,char **argv)
{
	char s[4];
	char c;
	int i = 0;
	int j = 0;
	

	scanf("%s",s);

	for (i = 0;i < 3;i ++)
	{
		c = s[i];
		if (c == '1')
		{
			j++;
		}
	}

	printf("%d\n",j);

	return 0;
}
