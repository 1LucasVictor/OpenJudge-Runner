#include <stdio.h>
#include <math.h>
int main(){
  
  int a,b,c;
  scanf("%d %d",&a,&b);

  c = a*b;

  if(c%2 == 0)
    puts("Even");
  else
    puts("odd");
  
  return 0;

}
