#include <stdio.h>
int main(void)
{
	int i,j,k,A[10][10],B[10][10],C[10][10],n,m,l ;
	
	scanf("%d %d %d",&n,&m,&l);
	

 	for(i=0;i<n;i++)
	{	
		for(j=0;j<m;j++)
		{		
			scanf("%d",&A[i][j]);
		}

	}

	for(i=0;i<m;i++)
	{	
		for(j=0;j<l;j++)
		{		
			scanf("%d",&B[i][j]);
		}

	}

	

	for(i=0;i<n;i++)
        {
		for(j=0;j<l;j++)
                {
			C[i][j] = 0;

			for(k=0;k<m;k++)
            {
				C[i][j] =  C[i][j] +  ( A[i][k] * B[k][j]);
			}
					
		}

	}

	for(i=0;i<n;i++)
        {
		for(j=0;j<l;j++)
		{
			printf("%d",C[i][j]);
			
			if(j<l-1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;


}