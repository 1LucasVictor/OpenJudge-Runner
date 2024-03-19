#include <stdio.h>
int main(){
  int a,b;
  int count = 1;
  scanf("%d%d",&a,&b);
  b -= a;
  while (b > 0){
    b -= (a - 1);
    count += 1;
  }
  printf("%d\n",count);
  return 0;
}