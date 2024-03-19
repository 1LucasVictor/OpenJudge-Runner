#include <stdio.h>
#include <string.h>

int main()
{
	char s1[11], s2[12],s3[301];
	int i,flg=0;
	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] != s2[i])
		{
			flg = 1;
		}
	}
	if (flg == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}