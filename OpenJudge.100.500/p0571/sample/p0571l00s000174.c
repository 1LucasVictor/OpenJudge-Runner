#include<stdio.h>
#define min(x,y) ((x)<(y)?(x):(y))
int main(){
  int n,a,b;
  scanf("%d%d%d",&n,&a,&b);
  printf("%d\n",min(n*a,b));
  return 0;}
