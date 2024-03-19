#include <stdio.h>

int main(){
  int r[100],n,maxv,minv,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&r[i]);
  }
  maxv=r[1]-r[0];
  minv=r[0];
  for(i=1;i<=n-1;i++){
    if(maxv<r[i]-minv) maxv=r[i]-minv;
    if(minv>r[i]) minv=r[i];
  }
  printf("%d\n",maxv);
  return 0;
}