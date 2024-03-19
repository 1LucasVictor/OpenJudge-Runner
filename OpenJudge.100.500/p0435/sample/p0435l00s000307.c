#include <stdio.h>
#include<math.h>
 
int main(void) {
  long double h,a,b,count=0;
  int n;
 
  
  scanf("%d %Lf",&n,&h);
  while(n--)
  {
      scanf("%Lf %Lf",&a,&b);
      long double c=sqrt(a*a+b*b);
      if(c<=h)
      count++;
  }
  printf("%.0Lf\n",count);
  return 0;
}