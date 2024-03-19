#include <stdio.h>
int main(void)
{
  int a,b,c,d,e,f;
  double x=0,y=0;

  while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f) != EOF)
    {      
      x = (double)(c*e - b*f) / (a*e - b*d);
      y = (double)(-d*c + a*f) / (a*e - b*d);
      
      if(x == -0) x = 0;
      if(y == -0) y = 0;
      
      printf("%.3f %.3f\n",x,y);
    }
  return 0;
}