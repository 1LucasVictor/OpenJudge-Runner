#include<stdio.h>
main()
{
  int a;
  int b;
  int c;

  scanf("%d%d",&a,&b);
  if(a >= b)
    {
      while(c != 0)
	{
	  c = a % b;
	  if(c == 0)
	    {
	      printf("%d\n",b);
	    }
	  else 
	    {
	      a = b;
	      b = c;
	    }
	}
    } 
  else if(b >= a)
    { 
      while(c != 0)
	{
	  c = b % a;
	  if(c == 0)
	    {
	      printf("%d\n",a);
	    }
	  else 
	    {
	      b = a;
	      a = c;
	    }
	}
    } 
  return 0;
}