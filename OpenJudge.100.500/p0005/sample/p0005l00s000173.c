#include<stdio.h>
int main()
{
	char str[21]={0};
	int i=0,j=0;
	
	scanf("%s",str);
	while(str[i]!=0)
	{
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		putchar(str[j]);
	}
	puts("");
	return 0;
}