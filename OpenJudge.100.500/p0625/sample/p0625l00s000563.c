#include<stdio.h>
int main(void)
{
  int a,b;
  scanf("%d%d",&a,&b);

  if(a<1 && a>16){
    return 1;
  }else if(a+b>16){
    return 1;
  }

  if(a > 8 || b > 8){
    printf(":(\n");
    return 1;
  }else{
    printf("Yay!\n");
  }

  return 0;
}