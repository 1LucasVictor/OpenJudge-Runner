#include <stdio.h>
int main(){
  int i,j,n,x;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    x=i;
    if(i%3==0)printf(" %d",i);
    else{
      for(j=0;j<4;j++){
    if(x%10==3){
      printf(" %d",i);
      break;
    }
    x/=10;
      }
    }
  }
  printf("\n");
  return 0;
}
