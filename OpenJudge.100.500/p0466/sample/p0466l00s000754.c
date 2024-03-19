#include <stdio.h>

int main()
{
	char S[100];
	char T[100];

	scanf("%s",&S);
	scanf("%s",&T);

	int flag=0;
	int i=0;

	while(S[i]!='\0')
	{
		if(S[i]!=T[i])
		{
			flag=1;
		}
		if(flag==1)
		{
			break;
		}
		i++;
	}

	if(flag==1)
		printf("No\n");
	else
	{
		printf("Yes\n");
	}
	return 0;
}