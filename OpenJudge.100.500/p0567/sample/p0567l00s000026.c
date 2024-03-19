#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(c - a + b >= 0){
    printf("%d\n", c - (a - b));
  }else{
    printf("0\n");
  }  
}
