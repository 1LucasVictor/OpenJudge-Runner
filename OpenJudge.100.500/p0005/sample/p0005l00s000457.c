#include<stdio.h>
#include<string.h>

int main()
{
	char str[20],n,m;
	scanf("%s",str);
	m=strlen(str);
	for(n=0;n<m;n++)
		printf("%c",str[m-n-1]);
	printf("\n");
	return 0;
}