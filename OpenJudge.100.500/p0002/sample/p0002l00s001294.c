#include <stdio.h>
int main()
{
	int n,a,b,c;
	while(scanf("%d",&n)!=EOF)
		while(n--)
		{
			{
				scanf("%d%d%d",&a,&b,&c);
				if(a>0&&b>0&&c>0&&(a+b)>c && (a+c)>b && (b+c)>a && abs(a-c)<b &&abs(b-c)<a&&abs(a-b)<c)
				{
					if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
						printf("YES\n");
					else
						printf("NO\n");
				}
				else
				{printf("NO\n");}
			}
		}
	return 0;
}