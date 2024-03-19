#include<stdio.h>
#include<string.h>
int main()
{
	char seq[21];
	int x,i;
	scanf("%20s",seq);
	x=strlen(seq);
	for(i=x-1;i>=0;i--)
		printf("%c",seq[i]);
	printf("\n");
	return 0;
}