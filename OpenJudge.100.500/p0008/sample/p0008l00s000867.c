#include<stdio.h>
int main()
{
	int s,i,j;
	int bbb,ccc;
	while((scanf("%d",&s))!=EOF)
	{
		bbb=0;
		for(i=2;i<=s;i++)
		{
			ccc=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					ccc++;
				}
			}
			if(ccc==2)
			{
				bbb++;
			}
		}
		printf("%d\n",bbb);
	}
	return 0;
}