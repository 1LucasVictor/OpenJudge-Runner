#include <stdio.h>

int main(){
  int n,i,m=0,b=0;
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    if(i%10==0)m+=10;
    if(m>9&&!b)b=1;
    if(i%3==0||(b&&i%m==3))printf(" %d",i);
  }
  printf("\n");
  return 0;
}