#include <stdio.h>
#define Max 10000
#define Min 500

int n,S[Max],T[Min];

int LinerSearch(int);

int main()
{
  int i,q,a=0,sum=0;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      scanf("%d",&S[i]);
    }

  scanf("%d",&q);

  for(i=0;i<q;i++)
    {
      scanf("%d",&T[q]);
    }

  for(i=0;i<q;i++)
    {
      a = LinerSearch(T[i]);

      if(a == T[i]) sum++;
    }

  printf("%d\n",sum);

  return 0;
}

int LinerSearch(int k)
{
  int i;

  for(i=0;i<n;i++)
    {
      if(S[i] == k) return S[i];
    }

  return S[i];
}
       