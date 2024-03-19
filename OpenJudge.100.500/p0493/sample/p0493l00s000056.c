#include <stdio.h>

int main (){
  int x, happiness=0;
  scanf("%d", &x);

  happiness = (500*(x/500)*2)+((((x%500))/5)*5);

  printf("%d\n", happiness);

  return 0;
}
