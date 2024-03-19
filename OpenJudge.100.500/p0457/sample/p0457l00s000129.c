#include <stdio.h>
int main(void)
{
  long int n,m,k,i,ni=0,mi=0,count=0;
  long int nn[200000],mm[200000];

  scanf("%ld %ld %ld",&n,&m,&k);
  for(i=0;i<n;i++)
  {
    scanf("%ld",&nn[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%ld",&mm[i]);
  }
  nn[n]=100000000;
  mm[m]=100000000;
  while (k>0)
  {
    if(nn[ni]>=mm[mi])
    {
      k=k-mm[mi];
      if(k<0)
      {
        break;
      }
      count++;
      mi++;
    }
    if(nn[ni] < mm[mi])
    {
      k=k-nn[ni];
      if(k<0)
      {
        break;
      }
      count++;
      ni++;
    }
  }
  printf("%ld",count);
  
return 0;
}
