#include <stdio.h>
#include <math.h>
int main()
{
	int n,d,r;
  double x,y;
  int res=0;
  scanf("%d %d",&n,&d);
  for(int i=0;i<n;i++)
  {
  scanf("%lf %lf",&x,&y);
   if(d<x||d<y) {}
   else if(sqrt(x*x+y*y)<=d) res++;
  }
  

  printf("%d",res);
  return 0;
}
