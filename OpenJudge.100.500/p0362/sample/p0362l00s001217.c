#include <stdio.h>

int main(void){

  int a, b, c;

  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
   
  if (a < b && b < c)
     printf("Yes\n");
  else if (a > b && b > c)
     printf("No\n");
  else if (a == b && b == c)
    printf("No\n");
  
     return 0;
}