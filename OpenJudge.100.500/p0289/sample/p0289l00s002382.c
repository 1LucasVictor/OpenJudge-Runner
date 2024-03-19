#include<stdio.h>

int gcd(int x, int y);

int main(){
  int x, y, i, d;
  scanf("%d%d",&x,&y);

  d=gcd(x,y);
  
  printf("%d\n",d);

  return 0;
}


int gcd(int x,int y)
{
  int a,r;
if (x < y){
    a=y;
    y=x;
    x=a;
  }
while (y > 0){
  r = x % y;
  x = y;
  y = r;
	  }
 return x;
}

