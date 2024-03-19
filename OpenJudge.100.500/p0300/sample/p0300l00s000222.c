#include <stdio.h>

int main()
{
  int n, S[1000], q, T[1000], C;
  int i, j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }

  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&T[i]);
  }

  C = 0;

  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(S[i]==T[j]) C++;
    }
  }

  printf("%d\n",C);
  return 0;
}