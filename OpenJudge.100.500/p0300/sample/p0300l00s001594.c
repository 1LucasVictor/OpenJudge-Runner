#include <stdio.h>
#define MAX 10000
int main(){
  int n,q;
  int S[MAX],T[500];
  int i,j;
  int count=0;
  
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
      if(S[i]==T[j]) count++;
    }
  }
  printf("%d\n",count);

  return 0;
}