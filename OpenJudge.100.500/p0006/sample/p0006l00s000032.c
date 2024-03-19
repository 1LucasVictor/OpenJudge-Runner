#include <stdio.h>

int main(){
  int i,j,k,l,m,n;
  m=100000;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    m=m*1.05;
    if((l=m%1000)!=0)m=m+1000-l;
  }
  printf("%d\n",m);
  return 0;
}