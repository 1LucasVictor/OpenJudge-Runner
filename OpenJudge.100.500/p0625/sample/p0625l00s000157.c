#include <stdio.h>

int main(){
  int a,b = 0;
  scanf("%d %d",&a,&b);
  if(a <= 8 && b <= 8){
    printf("Yay!\n");
  }else{
    printf(":(\n");
  }
  return 0;
}
