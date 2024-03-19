#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int dif;
  dif = a-b;
  int ans;
  ans = c-dif;
  if(ans<=0)printf("%d",0);
  else printf("%d",ans);
  return 0;
}
