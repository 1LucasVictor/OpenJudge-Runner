#include <stdio.h>
#include <math.h>

int main(){
  int S;
  scanf("%d",&S);

  int A = S/1000;
  int B = (S - A*1000)/100;
  int C = (S - A*1000 - B*100)/10;
  int D = (S - A*1000 - B*100 - C*10);


  if (A != B && B != C && C != D) {
    printf("Good\n");
  } else {
    printf("Bad\n");
  }
  return 0;
}
