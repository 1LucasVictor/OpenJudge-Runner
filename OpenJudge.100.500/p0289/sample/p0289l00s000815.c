#include<stdio.h>
#include<stdlib.h>

int gcd(int x,int y)
{
  if(y>x) return gcd(y,x);
  if(y==0) return(x);
  /* x>=y??????y!=0 */
  return gcd(y,x%y);
}

int main()
{
  int x,y,z;
  scanf("%d %d",&x,&y);
  z=gcd(x,y);
  printf("%d\n",z);
  return 0;
}