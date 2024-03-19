#include<stdio.h>

void swap(int *x,int *y);
  
int main(){
  int x,y,r;

  scanf("%d%d",&x,&y);
  if(x<y) swap(&x,&y);

  while(y>0){
    r=x%y;
    x=y;
    y=r;
  }
  printf("%d\n",x);
  return 0;
}

void swap(int *x,int *y)
{
  int a;
  a=*x;
  *x=*y;
  *y=a;
}