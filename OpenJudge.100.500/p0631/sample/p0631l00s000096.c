#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
  int a,b,x;

  scanf("%d%d%d", &a, &b, &x);

  if(a > x)
    puts("NO");
  else{
    if((a+b) >= x)
      puts("YES");
    else
      puts("YES");
  }

  
  
  return 0;
}
