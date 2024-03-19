#include<stdio.h>
#include<math.h>
int main()
{
  double d,n,ans;
  scanf("%lf %lf",&d,&n);
  if(n<100)ans = pow(100,d)*n;
  if(n==100)ans = pow(100,d)*101;
  printf("%d",(int)ans);
  return 0;
}
