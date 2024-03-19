#include <stdio.h>
 
int main(){
  int a,b,t;
  scanf("%d %d %d",&a,&b,&t);
  int all;
  all = b * (t / a);
  printf("%d\n",all);
  return 0;
}