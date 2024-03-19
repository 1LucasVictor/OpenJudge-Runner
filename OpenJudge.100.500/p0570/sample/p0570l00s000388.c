#include <stdio.h>
int main(){
  int A, B;
  int N;
  double tmp;
  scanf("%d %d", &A, &B);
  if(A<B){
    N = B - A;
  }else{
    N = A - B;
  }
  tmp = (double)((A + B) % 2);
  if(tmp == 0) printf("%d\n", (A+B)/2);
  else if (tmp != 0) printf("IMPOSSIBLE\n");
  return 0;
}