#include <stdio.h>

int main(){
  int a,b;
  scanf("%d%d",&a, &b);
  if(((a-b)<=1 && (a-b)>=-1) || ((b-a)<=1 && (b-a)>=-1))
    printf("Yay!\n");
  else
    printf(":(\n");
  return 0;
}
