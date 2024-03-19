#include <stdio.h>

int A;
int B;
int T;
int D;
int E;
int main()
{
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&T);
  E = 1;
  if(A<T){
      for(D = 1;D<T;D++)
          if(D%A==0){
          B = B*E;
          E = E+1;
          }
      D=D+1;
      printf("%d",B);
  }else{
      printf("0");
  }
    
    return 0;
}