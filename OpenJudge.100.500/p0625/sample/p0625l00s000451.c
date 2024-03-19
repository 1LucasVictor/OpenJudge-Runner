#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if(a+b<=16){
    printf("Yay!\n");
  }
  else{
    printf(":(\n");
  }
  return 0;
}