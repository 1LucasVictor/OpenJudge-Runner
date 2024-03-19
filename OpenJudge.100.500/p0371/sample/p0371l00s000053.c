#include <stdio.h>

int main(void){
  int n,max,min;
  int i,times;
  double sum=0;

  scanf("%d",&times);
  for(i=0;i<times;i++){
    scanf("%d",&n);
    if(i==0){
      max=n;
      min=n;
    }
    if(n>max) max=n;
    if(n<min) min=n;
    sum+=n;
  }

  printf("%d %d %.0f\n",min,max,sum);

  return 0;
}
    