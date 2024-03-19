#include<stdio.h>

int main(){
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);
  if(x <= 8 && y <= 8){
    printf("Yay!\n");
  }
  else{
    printf(":(\n");
  }

  return 0;
}
