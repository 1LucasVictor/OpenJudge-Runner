#include<stdio.h>

int main(){
  int a,b,x;
  scanf("%d%d%d",&a,&b,&x);

  int y=x-a;
  if((1<=y)&&(y<=b))printf("YES\n");
  else printf("NO\n");
  return 0;
}