#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;

  scanf("%d %d\n",&A, &B );

  if((A+B) % 2 ==0 ||  A!=B){
    printf("%d\n", (A+B)/2);
  }else{
    printf("IMOPSSIBLE");
  }
  return 0;
}
