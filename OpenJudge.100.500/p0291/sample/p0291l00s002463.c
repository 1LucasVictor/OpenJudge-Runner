#include <stdio.h>
#define N 200000

int main()
{
  int n,a[N],m,i,j,min,ma=-N;

  scanf("%d",&n);

  for(i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }

  min = a[0];
  
  for(i=1; i<n; i++)
    {
      if((a[i]-min)<0)
	    {
	      min = a[i];
	      j = i;
	    }
    }
  if(j == (n-1)){
    ma = a[j] - a[j-1];
  }
  else for(i=j+1; i<n; i++)
    {
      m = a[i] - min;
      if(ma < m)ma = m;
    }
  printf("%d\n",ma);

  return 0;
}