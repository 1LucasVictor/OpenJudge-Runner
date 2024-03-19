#include <stdio.h>
int main(void)
{
  int x,y;
  int cane,turtle;
  scanf("%d", &x);
  scanf("%d", &y);

 cane = (4*x-y)/2;
 turtle = (y-2*x)/2;

if(x > 100 || y > 100)
printf("No");


 if(cane < 0 || turtle < 0){
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
