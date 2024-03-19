#include <stdio.h>
int main()
{
  int x,y,z;
  scanf("%d %d",&x,&y);
  z=x*y;
  if (x>9||y>9){
    printf("-1\n");
  }else{
    printf("%d\n",z);
  }
  return 0;
}
