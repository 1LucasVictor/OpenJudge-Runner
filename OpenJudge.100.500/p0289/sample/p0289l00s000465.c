#include <stdio.h>

int main(){
  int x,y;
  int temp;
  scanf("%d %d",&x,&y);
  if(y>x){
    temp = x;
    x = y;
    y = temp;
  }
  while(x%y!=0){
    x = x%y;
    temp = x;
    x = y;
    y = temp;
  }
  printf("%d\n",y);
  return 0;
}
