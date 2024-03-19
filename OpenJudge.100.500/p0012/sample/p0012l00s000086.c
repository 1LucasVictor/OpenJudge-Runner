#include<stdio.h>

int main()
{
	int n,s[10],it=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			printf("%d\n",s[--it]);
		else
			s[it++]=n;
	}
	return 0;
}