#include<stdio.h>

int main(){

  int S[10000],T[500],count=0,n,q,i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++) 
    scanf("%d",&S[i]);

  scanf("%d",&q);
  for(i=0;i<q;i++) 
    scanf("%d",&T[i]);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(S[i]==T[j])count++;
    }
  }

  printf("%d\n",count);

  return 0;
}