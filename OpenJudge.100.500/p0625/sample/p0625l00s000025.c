#include<stdio.h>

int main(void)
{
  int A = 0;
  int B = 0;
  scanf("%d", &A);
  scanf("%d", &B);
  if(A <= 8 && B <= 8){
    printf("Yay!\n");
  }else{
    printf(":(\n");
  }

  return 0;

}
