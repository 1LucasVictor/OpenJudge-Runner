#include <stdio.h>

void main()
{
	char S[4];

	int flag=0;

	scanf("%s",S);

	for(int i=0; i<4; i++)
	{
		if(S[i]==S[i+1])
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
		printf("Bad");
	else
		printf("Good");
}
