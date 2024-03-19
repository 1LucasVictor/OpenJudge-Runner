#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *s,*t,n,q,i,j,count=0;
//入力処理//
  scanf("%d",&n);
  s=(int *)malloc(n*sizeof(int));
  for(i=0; i<n; i++)
  {
    scanf("%d",&s[i]);
  }
  scanf("%d",&q);
  t=(int *)malloc(q*sizeof(int));
  for(j=0; j<q; j++)
  {
    scanf("%d",&t[j]);
  }
//線形探索の実装//
  for(i=0; i<q; i++)
  {
    j=0;
    s[n-1]=t[i];
    while(s[j]!=t[i])
    {
      j++;
    }
    if(j!=n-1)count++;
  }

  printf("%d\n",count);

  return 0;
}

