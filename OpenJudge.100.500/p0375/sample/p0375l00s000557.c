#include <stdio.h>
int main(){
  int i,n,x;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    x=i;
    if(i%3==0)printf(" %d",i);
    else if(i%10==3){
      printf(" %d",i);
      x/=10;
    }
  }
  printf("\n");
  return 0;
}