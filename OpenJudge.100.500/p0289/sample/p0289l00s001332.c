#include<stdio.h>
int main()
{
  int x,y,d;
  scanf("%d%d",&x,&y);
  while(x%y!=0){
    d=x%y;
    x=y;
    y=d;
  }
  printf("%d\n",d);
  return 0;
}