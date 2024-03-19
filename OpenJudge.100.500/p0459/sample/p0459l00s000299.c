#include <stdio.h>

int main(){
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);
  if(((y&1)^1)&&(y>=(x<<1))&&(y<=(x<<2))){
    printf("Yes");
  }else{
    printf("No");
  }
  return(0);
}