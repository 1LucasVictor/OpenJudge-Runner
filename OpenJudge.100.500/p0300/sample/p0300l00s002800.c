#include<stdio.h>

int main(){
  int S[1000000],T[1000000],n,q,C = 0;
  int i,j;
  
  scanf("%d",&n);
  for(i = 0; i < n; i++) scanf("%d",&S[i]);
  for(i = 0; i < n; i++){
    if(S[i] == S[i+1]) C = C-1;
  }

  scanf("%d",&q);
  for(j = 0; j < q; j++) scanf("%d",&T[j]);
  for(j = 0; j < q; j++){
    if(T[j] == T[j+1]) C = C-1;
  }

  for(i = 0;i < n; i++){
    for(j = 0; j < q; j++){
      if(S[i] == T[j]) C++;
    }
  }

  printf("\n%d\n",C);
  return 0;
}
  
  

