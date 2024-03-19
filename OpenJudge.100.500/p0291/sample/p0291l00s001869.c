#include<stdio.h>

int main(){
  int n,i;
  int rt;
  int max = 0;
  int min;
  int ans=0;
  scanf("%d",&n);
  scanf("%d",&min);
  for(i =1;i<n; i++){
    scanf("%d", &rt);
    max = rt-min;
    if(min>rt){
      min = rt;
    }
    if(max > ans){
      ans = max;
    }
  }
  printf("%d\n",ans);
  return 0;
}