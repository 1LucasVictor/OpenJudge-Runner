#include <stdio.h>

int main(void){
  int A, B;
  scanf("%d %d", &A, &B);

  double C = (double)(B-1)/(double)(A-1);
  if(C == (int)C)
    printf("%d\n", (int)C);
  else
    printf("%d\n", (int)C+1);
  
  return 0;
}
