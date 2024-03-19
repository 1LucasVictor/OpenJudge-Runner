#include <stdio.h>

int main(){
  int a,b;

  scanf("%d%d", &a, &b);
  if(a > 7 || b > 7) printf(":(");
  else printf("Yay!");
  return 0;
}