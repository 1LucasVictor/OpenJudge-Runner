#include <stdio.h>

int main(){
  int A;
  int B;
  int X;
  scanf("%d%d%d", &A, &B, &X);
  if(X >= A && X <= A+B){
    printf("%s\n", "YES");
  }else{
    printf("%s\n", "NO");
  }

}
