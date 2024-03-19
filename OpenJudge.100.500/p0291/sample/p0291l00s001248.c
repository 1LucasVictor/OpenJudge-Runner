#include<stdio.h>

#define N 200000

int main(){

  int i, j, n, key, maxv, minv, R[N];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&R[i]);
  }
  minv = R[0];
  maxv = R[1]-R[0];

  for(j=1;j<=n-1;j++){
    if(R[j]-minv > maxv)maxv = R[j]-minv;
    if(R[j] < minv)minv = R[j];
  }
  printf("%d\n",maxv);
  return 0;
}