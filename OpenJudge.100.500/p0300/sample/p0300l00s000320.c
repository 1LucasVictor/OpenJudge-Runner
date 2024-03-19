#include<stdio.h>

int main(){
  int i, j, n, q, S[100], T[100], count=0, key;

  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&S[i]);
  scanf("%d",&q);
  for(i=0;i<q;i++)scanf("%d",&T[i]);

  for(i=0;i<q;i++){
    key=T[i];
    for(j=0;j<n;j++){
      if(key==S[j])count++;
    }
  }

  printf("%d\n",count);

  return 0;
}