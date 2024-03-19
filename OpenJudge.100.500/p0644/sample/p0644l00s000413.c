#include<stdio.h>
int main(){
  int n,ans = 0;
  scanf("%d",&n);
  for(int i = 0;i < 3;i++){
    ans += n % 10;
    n /= 10;
  }
  printf("%d\n",ans);
  return 0;
}