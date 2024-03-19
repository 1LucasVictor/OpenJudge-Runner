#include "stdio.h"

int main()
{
  int k, a, b;
  scanf ("%d",&k);
  scanf ("%d",&a);
  scanf ("%d",&b);
  int i,j;
  int c=0;
  for (i=1; i<=1000; i++)
    {
      for (j=a; j<=b; j++)
        {
          if ((k*i)==j)
            {
              c++;
              break;
            }
        }
      if (c == 0)
        continue;
      else
        break;
    }
  if (c==0)
    printf ("NG\n");
  else
    printf ("OK\n");
  return 0;
}