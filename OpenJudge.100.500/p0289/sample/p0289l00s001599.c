#include<stdio.h>
#include<stdlib.h>
int main(){
  int x,y,p,q;
  scanf("%d%d",&x,&y);

  p=x%y;
  while(1){
    q=y%p;
    if(q==0)break;
    y=p;
    p=q;
  }
  printf("%d\n",p);
  return 0;
}