#include<stdio.h>
#define N 10000
#define Q 500

main(){

  int n,q,S[N],T[N],i,j,count=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&T[i]);
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(T[j]==S[i]){
	count++;
      }
    }
  }
  printf("%d\n",count);
  return 0;
}