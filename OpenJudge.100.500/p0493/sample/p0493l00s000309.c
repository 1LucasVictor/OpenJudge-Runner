#include <stdio.h>
int main(void){
  int x,y,z,n;
  scanf("%d",&x);
  if(x<500){
    y=(x/5)*5;
    printf("%d",y);
  }else{
    y=x/500;
    z=x-(y*500);
    n=(z/5)*5;
    y=y*1000;
    printf("%d",y+n);
  }
  return 0;
}
  