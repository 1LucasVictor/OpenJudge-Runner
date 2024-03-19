#include <stdio.h>
int main()
{
  int x,y,z;
  int i,j,k;

  scanf("%d %d %d",&x,&y,&z);

  if(x<y)
  {
    if(y<z)
    {
      i=x;
      j=y;
      k=z;
    }
    else
    {
      if(x<z)
      {
        i=x;
        j=z;
        k=y;
      }
      else
      {
        i=z;
        j=x;
        k=y;
      }
    }
  }

  else
  {
    if(x<z)
    {
      i=y;
      j=x;
      k=z;
    }
    else
    {
      if(y<z)
      {
        i=y;
        j=z;
        k=x;
      }
      else
      {
        i=z;
        j=y;
        k=x;
      }
    }
  }

  printf("%d %d %d\n",i,j,k);
  return 0;
}