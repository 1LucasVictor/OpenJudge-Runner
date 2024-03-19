#include<stdio.h>
int main(){
  int i,j;//i:モンスターの体力　j:攻撃一回につき減らせる体力
  scanf("%d %d",&i,&j);
  int n=i;
  int t=0;
  while(n>0){
    n-=j;
    t++;
  }
  printf("%d\n",t);
  return 0;
}
    