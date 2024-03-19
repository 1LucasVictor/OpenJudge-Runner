#include <stdio.h>
int main(void)
{
  int a,b,c,d,n;
  int count=0;

  while(scanf("%d",&n) != EOF)
    {
      if(n <= 36)
	{
	  for(a = 0 ; a <= 9 ; a++)
	    for(b = 0 ; b <= 9 ; b++)
	      for(c = 0 ; c <= 9 ; c++)
               	for(d = 0 ; d <= 9 ; d++)
		  
		  if(n == a + b + c + d) count++;
	  
	  printf("%d\n",count);
	}
      else
	{
	  printf("0\n");
	}
      count = 0;
      
    }
  return 0;
}