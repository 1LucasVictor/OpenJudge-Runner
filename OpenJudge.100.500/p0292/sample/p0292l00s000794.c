#include <stdio.h>

int main()
{
  int x[100], n, i,j , swap;



  scanf("%d",&n);



int count=0;

  for (i = 0; i < n; i++)
    scanf("%d", &x[i]);

  for (i = 0 ; i <=( n - 1 ); i++)
  {
    for (j = n-1 ; j>=(i+1); j--)
    {
      if (x[j] < x[j-1])
      {
        swap       = x[j-1];
        x[j-1]   = x[j];
        x[j] = swap;
        count++;
      }
    }
  }



  for ( i = 0 ; i < n ; i++ )
     printf("%d ", x[i]);
     printf("\n");
     printf("%d\n",count);



}