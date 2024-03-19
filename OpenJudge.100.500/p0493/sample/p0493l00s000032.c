//AtCoder Beginner Contest160-B問題 リベンジ！
#include<stdio.h>
int main(void){
  int x;
  scanf("%d",&x);
  int c500=x/500;
  int r500=x%500;
  int c5=r500/5;
  int ans=c500*1000+c5*5;
  printf("%d",ans);
  return 0;
}