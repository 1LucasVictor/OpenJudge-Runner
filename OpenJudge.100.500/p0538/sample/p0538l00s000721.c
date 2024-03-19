#include <stdio.h>
int main()
{
  int x,y,z;
  scanf("%d %d",&x,&y);
  z=x*y;
  if (x>9&&x<1&&y>9&&y<1){
    printf("-1");
  }else{
    printf("%d",z);
  }
  return 0;
}