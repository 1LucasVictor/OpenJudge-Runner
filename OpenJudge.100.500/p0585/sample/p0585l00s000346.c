#include<stdio.h>

int main(){

  int a,b,t;
  int al,ans;

  scanf("%d %d %d",&a,&b,&t);

  al = (t+0.5)/a;

  ans = al*b;

  printf("%d\n",ans);

  return 0;

}
