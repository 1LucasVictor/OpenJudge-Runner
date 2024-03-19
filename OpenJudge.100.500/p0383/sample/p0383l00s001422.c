#include <stdio.h>
int main (void)
{
	int gr1[100][100],gr2[100][100],a1,a2,a3;
	int a,b,c,o,gou;
	unsigned long an[100][100];

	for(a=0;a<100;a++)
	{
		for(b=0;b<100;b++)
		{
			gr1[a][b]=0;
			gr2[a][b]=0;
			an[a][b]=0;
		}
	}
	scanf("%d%d%d",&a1,&a2,&a3);

	for(a=0;a<a1;a++)
	{
		for(b=0;b<a2;b++)
		{
			scanf("%d",&gr1[a][b]);
		}
	}
	for(a=0;a<a2;a++)
	{
		for(b=0;b<a1;b++)
		{
			scanf("%d",&gr2[a][b]);
		}
	}

	for(a=0;a<a3;a++)
	{
		for(b=0;b<a1;b++)
		{	
			
			for(c=0;c<a2;c++)
			{
				an[a][b]+=(gr1[a][c]*gr2[c][b]);
			}
		}
	}

	for(a=0;a<a3;a++)
	{
		for(b=0;b<a1-1;b++)
		{
			printf("%lu ",an[a][b]);
		}
		printf("%lu\n",an[a][a1-1]);
	}
	return 0;
}

			







	