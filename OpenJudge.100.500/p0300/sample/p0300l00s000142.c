#include <stdio.h>
int main(){
  int n, S[10000], q, T[500],i,j,x=0;

  scanf("%d",&n);
  for(i = 0; i < n; i++)
    scanf("%d",&S[i]);
  
  scanf("%d",&q);
  for(i = 0; i < q; i++)
    scanf("%d",&T[i]);

  for(i = 0; i < q; i++){
    for(j = 0; j < n; j++){
      if(T[i] == S[j]) x++;
    }
  }

  printf("%d\n",x);

  return 0;
}

