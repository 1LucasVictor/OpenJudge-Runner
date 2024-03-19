#include <stdio.h>
int main(){
  int x,y,amari,tmp;
  scanf("%d%d",&x,&y);
  if(x<y){
    tmp=x;
    x=y;
    y=tmp;
  }
  amari=x%y;
  while(amari!=0){
    x=y;
    y=amari;
    amari=x%y;
  }
  printf("%d\n",y);
  return 0;
}