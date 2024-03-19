#include<stdio.h>

int main(void)
{
	int n,i,j,l,a=0;
	int ar[4][13]={{0}};
	char s,kaigyokun=0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%c",&kaigyokun);
		scanf("%c %d", &s, &l);
		
		if(s == 'S') a = 0;
		else if (s == 'H') a = 1;
		else if (s == 'C') a = 2;
		else if (s == 'D') a = 3;
		
		ar[a][l-1] = 1;
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 13; j++)
		{
			if((ar[i][j]) != 1)
			{
				if(i == 0) s = 'S';
				else if (i == 1) s = 'H';
				else if (i == 2) s = 'C';
				else if (i == 3) s = 'D';
				
				printf("%c %d\n", s, j+1 );
			}
		}
	}
	
	return 0;
}

