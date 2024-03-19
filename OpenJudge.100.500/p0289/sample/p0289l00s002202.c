
#include<stdio.h>
int gcd(int x,int y){
  int r,tmp;
  if(x<y){
    tmp=x;
    x=y;
    y=tmp;
  }
  r=x%y;
  while(r!=0){
    x=y;
    y=r;
    r=x%y;
  }
  return y;
}
int main(void){
  int x,y,r;
  scanf("%d",&x);
  scanf("%d",&y);
  r=gcd(x,y);
  printf("%d\n",r);
  return 0;
}

