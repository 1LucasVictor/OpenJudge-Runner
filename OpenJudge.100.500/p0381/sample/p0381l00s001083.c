#include "stdio.h"

int main()
{

  int  n,x,i,j,k,m=0;

  for (;;)
  {

    scanf("%d %d\n",&n,&x );
    if (n==0 && x==0) break;


    for (i = 1; i <= n-2; i++)
    {
      for (j = i+1;  j<=n-1 ; j++)
      {
        for (k = j+1; k <= n; k++)
        {
          if ((i+k+j)==x)
          {
            m++;
          }
        }
      }
    }

    printf("%d\n",m );

  }



  return 0;
}

