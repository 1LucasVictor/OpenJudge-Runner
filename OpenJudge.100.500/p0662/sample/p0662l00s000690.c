#include <stdio.h>
int main(){
  int a,b,c,d,ans = 0;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(d >= b && a <= c && c <= b){
    ans = b - c;
  }else if(d <= b && c <= a && a <= d){
    ans = d - a;
  }else if(a >= c && b <= d){
    ans = b - a;
  }else if(a <= c && b >= d){
    ans = d - c;
  }
  printf("%d\n",ans);
  return 0;
}