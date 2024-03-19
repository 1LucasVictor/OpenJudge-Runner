#include <stdio.h>

int swap(int *x,int *y);
int gcd(int x,int y);
int main()
{
  int x,y;

  scanf("%d%d",&x,&y);

  if(x < y)swap(&x,&y);

  printf("%d\n",gcd(x,y));

 
}

int swap(int *x,int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
int gcd(int x,int y)
{ 
  int r;
  while(y>0){
    r = x % y;
    x = y;
    y = r;
  }
    return x;
}