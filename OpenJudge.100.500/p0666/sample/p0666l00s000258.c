#include <stdio.h>
int main()
{
  int x,a,b,eat;
  scanf("%d",&x); scanf("%d",&a); scanf("%d",&b);
  eat=b-a;
  if(b<=a) printf("delicious");
  else if(eat<=x) printf("safe");
  else printf("dangerous");
  return 0;
}