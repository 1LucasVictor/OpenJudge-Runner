#include<stdio.h>
int main(void)
{
  int x,y,z;
  scanf("%d %d %d",&x,&y,&z);
  if(x*y<z){
    printf("%d",x*y);
  }
  else{
    printf("%d",z);
  }
  return 0;
}
  