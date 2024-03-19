#include<stdio.h>
int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  y/=2;
  if(x<=y && y<=2*x)
    puts("Yes");
  else
    puts("No");
  return 0;
}
