#include<stdio.h>

int A[10000];
int main( void ) 
{
  
    int n,count=0;
    scanf( "%d", &n );
     
    int i, j;

    for( i=0; i<n; i++ ) 
	{
        scanf( "%d", &A[i] );
    }
    for( i=0; i<n; i++ ) 
	{    
        for(j=n-1;j>i;j--)
		{
			if(A[j-1] > A[j])
			{
				int temp = A[j-1];
				A[j-1] = A[j];
				A[j]=temp;
				count++;
			}
		}
		printf("%d ",A[j]);
    }
	printf("\n%d",count);
    return 0;
	
}