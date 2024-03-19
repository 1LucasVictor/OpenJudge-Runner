#include<stdio.h>
#include<math.h>
int main(){
  int a,b,ans;
  scanf("%d%d",&a,&b);
  if(a+b>a-b) ans = a+b;
  else ans = a-b;
  if(ans<a*b) ans = a*b;
  printf("%d\n",ans);
  return 0;
}