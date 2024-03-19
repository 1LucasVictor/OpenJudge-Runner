#include<stdio.h>

int main(void)
{
    int i,j,n,a[4][13],number;
    char card;

    for (i = 0; i < 13; i++)
	{
		a[0][i]=0;
		a[1][i]=0;
		a[2][i]=0;
		a[3][i]=0;
    }

    scanf("%d",&n);

    for(i=0;i<n*2;i++)
    {
        scanf("%c %d", &card,&number);
 
        if(card == 'S')
        {
            a[0][number-1] = 1;
        }

        if(card == 'H')
        {
            a[1][number-1] = 1;
        }

        if(card == 'C')
        {
            a[2][number-1] = 1;
        }

        if(card == 'D')
        {
            a[3][number-1] = 1;
        }
    }
 
    for(i=0;i<4;i++)
    {
		for(j=0;j<13;j++)
		{
			if((a[i][j] == 0)&&(i==0))
			{
			 printf("S %d\n",j+1);
			}

			if((a[i][j] == 0)&&(i==1))
			{
				printf("H %d\n",j+1);
			}
 
			if((a[i][j] == 0)&&(i==2))
			{
				printf("C %d\n",j+1);
			}

			if((a[i][j] == 0)&&(i==3))
			{
				printf("D %d\n",j+1);
			}
		}
		
    }
    return 0;
}
