#include<stdio.h>
int main(void)
{
  int a,b;

  scanf("%d %d",&a,&b);

  if(a<b){
    printf("0\n");
  }else if(a>=b){
    printf("10\n");
  }

  return 0;
}
