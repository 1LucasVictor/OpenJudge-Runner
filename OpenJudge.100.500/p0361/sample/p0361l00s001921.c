#include <stdio.h>

int main() {
  int S;
  scanf("%d" , &S);
  printf("%d:",S/3600);
  printf("%d:",S%3600/60);
  printf("%d\n",S%3600%60);

return 0;
}