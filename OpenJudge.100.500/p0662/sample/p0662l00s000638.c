#include<stdio.h>
#define max(m,n) ((m)>(n)?(m):(n))
#define min(m,n) ((m)>(n)?(n):(m))
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(a<b&&c<d)
		{
			e=max(a,c);
			f=min(b,d);
			if(f-e>0)
			printf("%d\n",f-e);
			else printf("0\n");
		}
		else printf("0\n");
	}
	return 0;
}