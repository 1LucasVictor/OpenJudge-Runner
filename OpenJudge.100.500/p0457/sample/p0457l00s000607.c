#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long int

int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int N, M, K;

    scanf("%d %d %d",&N,&M,&K);

    int A[N];
    int B[M];
    int S[N+M];

    for (int i = 0 ; i<N; i++)
        scanf("%d",&A[i]);

    for (int i = 0 ; i<M; i++)
        scanf("%d",&B[i]);

    int idx1 = 0 ;
    int idx2 = 0;
    int count =  0;
    int i = 0 ;

    while (K)
    {

        if (i % 2 == 0 && idx1 < N )
        {
            K-=A[idx1];
            idx1++;

            count++;
        }

        else
        {
		  if (idx2<M)
		  {
            K-=B[idx2];
            idx2++;
            count++;
		  }
		  else
		  {
		  	 K-=A[idx1];
            idx1++;

            count++;
		  }
        }
        i++;

        if (K<0)
        {
            count--;
            break;
        }
    }


    printf("%d",count);



    return 0;
}
