#include<stdio.h>
int main(){
  int A,B,C,ans;
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  ans = A-B;
  if(ans < C){
    printf("%d\n",C-ans);
  }else{
    printf("%d\n",0);
  }
  return 0;
}
  