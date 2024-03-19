#include<stdio.h>
#include<string.h>
#define N 100000
int main()
{
	char S[N];
	scanf("%s", &S);
	int one=0;
	int zero=0;
	int i = 0;
	for (;i < strlen(S);i++)
	{
		if (S[i] == '0')zero++;
		else one++;
	}
	if(one>=zero)printf("%d\n", 2 * zero);
	else printf("%d\n", 2 * one);
	
	return 0;
}