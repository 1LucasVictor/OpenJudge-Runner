#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
  int A,B;
  scanf("%d%d", &A,&B);

  int ans = 0;
  int outlet = 1;

  while (outlet < B) {
    outlet = outlet - 1 + A;
    ans++;
  }

  printf("%d\n", ans);

}
