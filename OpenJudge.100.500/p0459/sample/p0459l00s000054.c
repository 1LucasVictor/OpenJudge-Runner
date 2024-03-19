#include <stdio.h>
int main(void)
{
  int x,y;
  scanf("%d", &x);
  scanf("%d", &y);

if(x > 100 || y > 100 || x < 1 || y < 1)
printf("No");


 if(4*x-y < 0 || y-2*x < 0){
 printf("No");
}else if(4*x-y % 2 == 1){
 printf("No");
}else if(y-2*x % 2 == 1){
  printf("No");
}else{
  printf("Yes");
}

  return 0;
}