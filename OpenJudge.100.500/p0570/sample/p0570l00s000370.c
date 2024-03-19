#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
	if(a<b)
	{
		for(c = 0;c < b;c++)
		{
			d = (a - c);
			if(d < 0)
			{
				d = d * -1;
			}
			e = (b - c);
			if(e < 0)
			{
				e = e * -1;
			}
			if(d == e)
			{
				printf("%d\n",c);
				break;
			}
				
		}
	}
	else if(a>b)
	{
		for(c = 0;c < a;c++)
		{
			d = (a - c);
			if(d < 0)
			{
				d = d * -1;
			}
			e = (b - c);
			if(e < 0)
			{
				e = e * -1;
			}
			if(d == e)
			{
				printf("%d\n",c);
				break;
			}
				
		}
	}
	if(d != e)
	{
		printf("IMPOSSIBLE\n");
	}
    return 0;
}