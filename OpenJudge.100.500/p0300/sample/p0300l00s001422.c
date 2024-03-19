#include <stdio.h>

#define N 100000
#define Q 500

int main() {
  int i,j,S[N],T[Q],n,q,count=0,key;
  scanf("%d",&n);
  for(i=0; i<n; i++) scanf("%d",&S[i]);
  scanf("%d",&q);
  for(i=0; i<q; i++) scanf("%d",&T[i]);

  for(i=0; i<n; i++){
    key = S[i];
    for(j=0; j<Q; j++){
      if(T[j] == key) count++;
    }
  }
  printf("%d\n",count);

  return 0;

}