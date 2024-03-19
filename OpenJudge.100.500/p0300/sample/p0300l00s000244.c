#include<stdio.h>
#define N 10000
int main(){
  int i,j,count = 0,n,q,S[N],T[N];

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d",&S[i]);
  }

  scanf("%d",&q);

  for(i = 0;i < q;i++){
    scanf("%d",&T[i]);
  }

  for(i = 0;i < n;i++){
    for(j = 0;j < q;j++){
      if(S[i] == T[j])count++;
    }
  }

  printf("%d\n",count);

  return 0;
}