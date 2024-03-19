#include<stdio.h>
#include<string.h>

int main(void)
{
	int i,j=0;
	char st[21],st1[21];
	
	scanf("%s",st);
	for(i=strlen(st)-1;i>=0;i--)
	{
		st1[j]=st[i];
		j++;
	}
	st1[j]='\0';
	printf("%s\n",st1);
	return 0;
}