#include<stdio.h>
int main(void)
{
  int a,b,c,box;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b){
    box=a;
    a=b;
    b=box;
  }
  if(b>c){
    box=b;
    b=c;
    c=box;
  }
  if(a>b){
    box=a;
    a=b;
    b=box;
  }
  printf("%d %d %d\n",a,b,c);
  return 0;
}