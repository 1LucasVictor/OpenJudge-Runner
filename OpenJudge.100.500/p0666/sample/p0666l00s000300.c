#include <stdio.h>

int main(void) {
  int x,a,b;
  scanf("%d", &x);
  scanf("%d", &a);
  scanf("%d", &b);
  if((a-b) >= 0) {
     printf("delicious");
  } else if (x+(a-b) >= 0) {
     printf("safe");}
  else { printf("dangerous"); }     
  return 0;
   



}