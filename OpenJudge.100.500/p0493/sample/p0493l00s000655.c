#include<stdio.h>
int main(){
  int x;
  int ans=0;
  int temp=0;
  scanf("%d",&x);
  temp = x/500;
  ans += 1000*temp;
  temp = x-500*temp;//余り
  temp = temp/5;
  ans += temp*5;
  printf("%d",ans);
  return 0;
}