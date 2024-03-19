#include <stdio.h>
int main()
{
  int x,y,z;
  scanf("%d",&x);
  scanf("%d",&y);
  z=x*y;
  if (x>20&&x<1&&y>20&&y<1){
    printf("-1");
  }else{
    printf("%d",z);
  }
  return 0;
}