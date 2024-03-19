#include <stdio.h>
#define N 10000
int main()
{

  int i, j, num=0, n, q, key;
  int S[N], T[N], A[N];
  scanf("%d",&n);
  for(i = 0 ; i < n ; i++)
    {
      scanf("%d",&S[i]);
    }
  scanf("%d",&q);
  for(i = 0 ; i < q ; i++)
    {
      scanf("%d",&T[i]);
    }

  for(i = 0 ; i < n ; i++)
    {
      key = S[i];
  for(j = 0 ; j < q ; j++)
    {
      if(key == T[j]){
	num++;
      }
    }

  }
    
      printf("%d\n",num);
  return 0;
}