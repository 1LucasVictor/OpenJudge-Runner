#include <stdio.h>
void aaa(char, int);
int tp[4][13]={{0}};

void aaa(char g, int x)
{
	if (g=='S')//0
	{
		tp[0][x]=1;
	}
	else if (g=='H')//1
	{
		tp[1][x]=1;
	}
	else if (g=='C')//2
	{
		tp[2][x]=1;
	}
	else if (g=='D')//3
	{
		tp[3][x]=1;
	}
	return ;
}

int main(void)
{
	
	int a, i, x;
	char g;
	int f, j;

	scanf("%d", &a);
	for (i=0;i<a;i++)
	{
		scanf("%c", &g);
		if (g == '\n') scanf("%c%d", &g, &x);
		else scanf("%d", &x);
		aaa(g, x-1);
	}

	for (f=0;f<4;f++)
	{
		for (j=0;j<13;j++)
		{
			if (tp[f][j]==0)
			{
				if (f==0)
				{
					printf("S %d\n", j+1);
				}
				else if (f==1)
				{
					printf("H %d\n", j+1);
				}
				else if (f==2)
				{
					printf("C %d\n", j+1);
				}
				else if (f==3)
				{
					printf("D %d\n", j+1);
				}
			}
		}
	}


	return 0;
}