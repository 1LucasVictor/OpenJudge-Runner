#include<stdio.h>

int main(){
  int x, y;

  scanf("%d%d",&x,&y);
 
  printf("%d\n", gcd(x,y));

  return 0;
}
	       
int gcd(int x,int y)
{
  int r,c;
  if(x < y){
    int c=x;
    x=y;
    y=c;
  }
  while(y>0)
    {
      r=x%y;
      x=y;
      y=r;
      // printf("r=%d x=%d y=%d", r, x, y);
    } 
  return x;
} 