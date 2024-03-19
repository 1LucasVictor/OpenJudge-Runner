#include <stdio.h>

int main()
{
  	int m ,n, a;
    scanf("%d %d",&m, &n);
  
  if(m<10)
    if(n<10)
    	a=m*n;
    else
    	a=-1;
  else
    a=-1;
  printf("%d",a);
}
  