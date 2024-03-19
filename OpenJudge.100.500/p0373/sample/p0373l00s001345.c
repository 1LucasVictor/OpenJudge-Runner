#include<stdio.h>
#define MAX 300
int H[MAX],W[MAX],l=0;
void hyouji()
{
	int i,j,k;
	for(k=0;k<l;k++)
	{
		for(i=1;i<=H[k];i++)
		{
			for(j=1;j<=W[k];j++)
			{
				if(i==1)
				{
					if(j==W[k])
						printf("#\n");
					else
						printf("#");
				}
				else if(j==1)
					printf("#");
				else if(j==W[k])
					printf("#\n");
				else if(i==H[k])
				{
					if(j==W[k])
						printf("#\n");
					else
						printf("#");
				}
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
int main()
{
	int i;
	for(i=0;i<300;i++)
	{
		scanf("%d %d",&H[i],&W[i]);
		if(H[i]==0&&W[i]==0)
			break;
		l++;
	}
	hyouji();
	return 0;
}