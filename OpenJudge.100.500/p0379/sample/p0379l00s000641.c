#include<stdio.h>

int main()
{
    int n=0 ,m=0 ;
    int A[101][101] = {0} ;
    int b[101] = {0} ;
    int c[101] = {0} ;
    int i=0 ,j=0 ;

    scanf("%d %d" ,&n ,&m) ;

    for (i=0 ;i < n ;i++)
    {
        for (j=0 ;j < m ;j++)
        {
            scanf("%d" ,&A[i][j]) ;
        }
    }

    for (i=0 ;i < m ;i++)
    {
        scanf("%d" ,&b[i]) ;
    }

    for (i=0 ;i < n ;i++)
    {
        for (j=0 ;j < m ;j++)
        {
            c[i] = c[i] + (A[i][j] * b[j]) ;
        }
        printf("%d\n" ,c[i]) ;
    }

    return 0;
}