#include<stdio.h>
#define N 10000
#define Q 500
int main()
{
  int i, j, n, q, s[N], t[Q], c=0;

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d",&s[i]);
  }
  scanf("%d",&q);
  for(i = 0; i < q; i++){
    scanf("%d",&t[i]);
  }

  for(i = 0; i < q; i++){
    for(j = 0; j < n; j++){
      if(t[i] == s[j]) c++;
    }
  }
  
 

  printf("%d\n",c);

  return 0;
}