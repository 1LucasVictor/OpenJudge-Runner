#include <stdio.h>
#include <math.h>

int main(void){
  int i,n,x,min,max,sum;
  scanf("%d",&n);
  scanf("%d",&x);
  sum=x;
  min=x;
  max=x;
  for(i=2;i<=n;i++){
      scanf("%d",&x);
      sum=sum+x;
      if(x<=min){
          min=x;
      }
      if(max<=x){
          max=x;
      }
  }
    printf("%d %d %d\n",min,max,sum);
  return 0;
}