#include <stdio.h>

int main(){
  int A,B,T;
  scanf("%d %d %d", &A, &B, &T);
  
  int bisket=0;
  for(int i=1; i<=T; i++){
    if((i%A) == 0) bisket += B;
  }
  printf("%d", bisket);
}