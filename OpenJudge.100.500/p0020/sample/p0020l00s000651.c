#include <stdio.h>
int main(void)
{
  int n;
  double x1,y1,x2,y2,x3,y3,x4,y4,a,b;
  scanf("%d",&n);
  while(n--){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    a=(y2-y1)/(x2-x1);
    b=(y4-y3)/(x4-x3);
    if(a==b)
      puts("YES");
    else
      puts("NO");
  }
  return 0;
}