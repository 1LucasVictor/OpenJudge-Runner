#include "stdio.h"

int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  if(x<=9&&y<=9){printf("%d",x*y);}
  else{ printf("-1");}
  return 0;
}