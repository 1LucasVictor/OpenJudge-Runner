#include<stdio.h>
int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  y-=x*2;
  if(y<0||y%2||y>x*2)printf("No\n");
  else               printf("Yes\n");
  return 0;
}
