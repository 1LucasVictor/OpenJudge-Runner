#include <stdio.h>

int main(void)
{
	char s[3];
	scanf("%s",s);
	int i=0,count=0;
	for(i;i<=2;i++)
		{
		if(s[i]=='1')
		{count++;}
		}
	printf("%d\n",count);
	return 0;
}
