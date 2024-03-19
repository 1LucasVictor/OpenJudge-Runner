#include<stdio.h>
int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		int t,s=m+n;
		t=0;
		while(s)
		{
			s/=10;
			t++;
		}
		printf("%d\n",t);
	}
	return 0;
} 