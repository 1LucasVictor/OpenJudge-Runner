#include<stdio.h>

int main(){
  int x,y,ns,nb,d;
  scanf("%d%d",&x,&y);
  if(x<y){
    ns=x;
    nb=y;
  }
  else if(y<x){
    ns=y;
    nb=x;
  }
  while(1){
    d=nb%ns;
    if(d==0) break;
    nb=ns;
    ns=d;
  }
  printf("%d\n",ns);
  return 0;
}
