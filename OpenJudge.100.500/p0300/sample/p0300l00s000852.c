#include<stdio.h>

int main(){
  int i, j, n, q, c=0;
  int S[1000000], T[1000000];
  
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(i=1; i<=q; i++){
    scanf("%d",&T[i]);
  }
  
  for(i=1; i<=q; i++){
    for(j=1; j<=n; j++){
      if(S[j] == T[i]) c++;
    }
  }
  printf("%d\n",c);
  return 0;
}