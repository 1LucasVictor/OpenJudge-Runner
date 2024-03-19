#include <stdio.h>
int main()
{
  int x,y,temp,min,d;

  scanf("%d%d",&x,&y);

  if(x>=y)
    {
      min=y;
      temp=x%y;
    }
  else
    {
      min=x;
      temp=y%x;
    }

  if(temp==0)
    {
      d=min;
    }
  else
    {
      for(d=temp;d>0;d--)
	{
	  if(temp%d==0 && min%d==0)
	    {
	      break;
	    }
	}
    }
  printf("%d\n",d);
  return 0;
}