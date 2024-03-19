#include<stdio.h>
int main(void)
{
  int N,K;
  scanf("%d %d",&N,&K);
  int i,min,rmin;
  if(N>K){
    min=N;
    for(i=N/K;i>0;i--){
      min=min-K;
    }
    rmin=min-K;
    if(rmin<0)
      rmin=0-rmin;
    if(rmin<min)
      min=rmin;
    printf("%d",min);
  }
  else
    printf("%d",N);
  return 0;
}