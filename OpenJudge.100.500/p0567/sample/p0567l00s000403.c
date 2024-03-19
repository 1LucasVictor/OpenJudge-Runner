#include <stdio.h>
int main(){
  int A, B, C;
  scanf("%d" "%d" "%d", &A, &B, &C);
  int ans = C - (A - B);
  if(ans < 0){
    printf("0\n");
  }else{
    printf("%d\n", ans);
  }
  return 0;
}
