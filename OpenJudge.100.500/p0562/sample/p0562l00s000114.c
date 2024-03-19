#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
  int A,B;
  scanf("%d%d", &A,&B);

  int ans = 1;

  while (1 + (A-1) * ans < B) {
    ans++;
  }

  printf("%d\n", ans);

}
