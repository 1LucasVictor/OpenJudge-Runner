#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int n,a,i,j,count=0,frag=0;
  double sqrta;
  scanf("%d",&n);
  if(n<1 || n>10000) exit(8);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a);
      if(a>=2 && n<=100000000)
	{
	  if(a == 2)
	    {
	      count++;
	      continue;
	    }
	  else if(a%2 == 0) continue;

	  sqrta = sqrt(a);
	  for(j=3;j<=sqrta;j+=2)
	    {
	      if(a%j == 0)
		{
		  frag = 1;
		  break;
		}
	    }
	  if(frag == 0)
	    {
	      count++;
	    }
	  frag = 0;
	}
    }
  printf("%d\n",count);
  return 0;
}
  

