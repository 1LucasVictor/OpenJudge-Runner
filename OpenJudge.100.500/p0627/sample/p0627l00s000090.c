#include <stdio.h>

int main(void)
{
    int A,B,C,D,E,F;
    scanf("%d", &A);
    if(A < -1000){
      return 0;
    }
    scanf("%d", &B);
    if(B > 1000){
      return 0;
    }
    C = A+B;
    D = A-B;
    E = A*B;
    if((C-D) >= 0){
      if((C-E) >= 0){
        printf("%d", C);
      }else{
      printf("%d", E);
    }
    }else if((C-D)<0){
      if((D-E)>=0){
        printf("%d", D);
      }else{
      printf("%d", E);
    }
  }
}
