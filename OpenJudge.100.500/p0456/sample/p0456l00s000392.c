#include <stdio.h>
#include <string.h>
int chang(char* S, char* T)
{

	int cnt = 0;
	char tmp[1024];

	for (int i = 0; i <= strlen(S); i++)
	{
	
		if (S[i] != T[i])
		{
			//S[i] = T[i];
			cnt++;
		}
	}

	return cnt;
}
int main(void)
{
	char S[210000];
	char T[210000];
	
	//printf("S=  ");
	scanf("%s", S);

	//printf("\nT=  ");
	scanf("%s", T);
	
	if (strlen(S) != strlen(T))
	{
		//printf("駄目だよ\n");
	}
	else if (strlen(S) == strlen(T))
	{
		printf("%d", chang(S, T));
	}
	else if (strlen(S) < 1)
	{
		//("駄目だよ\n");
	}
	return 0;
}