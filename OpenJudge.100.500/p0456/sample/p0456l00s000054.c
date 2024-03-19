#include<stdio.h>
#include<string.h>
char s[200001];
char t[200001];
int main()
{
	int sum=0,len,i;
	scanf("%s",s);
	scanf("%s",t);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]!=t[i]) sum++;
	}
	printf("%d\n",sum);
}