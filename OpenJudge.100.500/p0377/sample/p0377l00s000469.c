#include <stdio.h>

int main(void)
{
	int i,j,n,y;
	int card[4][13]={0};
	char f;
	
	scanf("%d\n",&n);
	
	for(j=0;j<n;j++)
	{
		scanf("%c%d\n",&f,&y);
		if(f=='S')
			card[0][y-1] = 1;
		else if(f=='H')
			card[1][y-1] = 1;
		else if(f=='C')
			card[2][y-1] = 1;
		else if(f=='D')
			card[3][y-1] = 1;
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<13;j++)
		{
			if(i == 0 && card[i][j]==0)
				printf("S %d\n",j+1);
			if(i == 1 && card[i][j]==0)
				printf("H %d\n",j+1);
			if(i == 2 && card[i][j]==0)
				printf("C %d\n",j+1);
			if(i == 3 && card[i][j]==0)
				printf("D %d\n",j+1);
		}
	}
	
	
	return 0;
}