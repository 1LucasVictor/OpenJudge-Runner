#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
    int n, m, l;
    int A[100][100], B[100][100];
    long C[100][100];
    int i, j, k;
    
    scanf("%d %d %d", &n, &m, &l);
    //scanf A's element
    for (i = 0; i < n; i++)
    	for (j = 0; j < m; j++)
    		scanf("%d", &A[i][j]);
    //scanf B's element;
    for (i = 0; i < m; i++)
    	for (j = 0; j < l; j++)
    		scanf("%d", &B[i][j]);

    /*for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d", A[i][j]);
        printf("\n");
    }
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < l; j++)
            printf("%d", B[i][j]);
        printf("\n");
    }*/
    for (i = 0; i < n; i++)
    	for (j = 0; j < l; j++)
    	{
    		C[i][j] = 0;
    		for(k = 0; k < m; k++)
    			C[i][j] += A[i][k] * B[k][j];
    	}

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < l; j++)
        	if(j != l - 1)
            	printf("%ld ", C[i][j]);
            else
            	printf("%ld", C[i][j]);
        printf("\n");
    }

    
    return 0;
}
