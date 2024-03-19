#include<stdio.h>
int main(void){
  int A,B,ans;
  scanf("%d",&A); scanf("%d",&B);
  if(A > 9 || B > 9 || A < 0 || B < 0){
    ans = -1;
  }else{
    ans = A * B;
  }
  printf("%d",ans);
return 0;
}