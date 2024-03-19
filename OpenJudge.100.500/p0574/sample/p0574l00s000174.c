#include<stdio.h>
int main()
{
	char S[4];
	scanf("%s",S);
	int B=0;
	for(int i=0;i<3;i++)
	{
		if(S[i]==S[i+1])B=1;
	}
	printf("%s\n",B? "Bad":"Good");
	return 0;
}