#include<stdio.h>
int main(){
  int x,y,d,n;
  scanf("%d %d",&x,&y);
  if(x<y){
    n=x;
    x=y;
    y=n;
  }
  d = x%y;
  while(d!=0){
    x=y;
    y=d;
    d=x%y;
  }
  printf("%d\n",y);
  return 0;
}

