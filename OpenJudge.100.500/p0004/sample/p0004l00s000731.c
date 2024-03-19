#include<stdio.h>
 
int main(void)
{
 int x,y,R,temp_x,temp_y;
 while(scanf("%d %d",&x,&y)!=EOF)
 {
  temp_x = x;
  temp_y = y;
  while(x % y != 0)
  {
   R = x % y;
   x = y;
   y = R;
  }
  printf("%d %d\n",y,temp_x*(temp_y/y));
 }
 return 0;
}