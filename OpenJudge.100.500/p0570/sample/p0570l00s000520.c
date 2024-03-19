#include <stdio.h>
#include <math.h>

int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(((a%2==0)&&(b%2==0))||((a%2==1)&&(b%2==1)))printf("%d",(a+b)/2);
  else printf("IMPOSSIBLE");
  return 0;
}