#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int K;
  int A, B;

  int check = 1;

  scanf("%d",&K);
  scanf("%d%d", &A, &B);


  for (int i = A; i<=B; i++){
    if (i%K==0){
      check = 0;
      break;
    }
  }


  if (check == 0) printf("OK\n");
  else printf("NG\n");

  return 0;
}
