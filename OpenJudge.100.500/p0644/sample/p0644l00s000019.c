#include <stdio.h>
int main(){
  int a,r=0;
  for(scanf("%d",&a);a;a/=10)r+=a%10;
  printf("%d",r);
  return 0;
}