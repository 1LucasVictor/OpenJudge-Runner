#include <stdio.h>

int main(void){
  int S[10001],T[501];
  int i,j,n,q,s,count=0;

  scanf("%d",&n);
  for(i = 0 ; i < n ; i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(j = 0 ; j < q ; j++){
    scanf("%d",&T[j]);
  }
  
  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < q ; j++){
      if(S[i] == T[j]){
	count++;
      }
    }
  }
  printf("%d\n",count);
}