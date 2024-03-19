#include<stdio.h>
int main(){
  int A,B;
  scanf("%d",&A);
  scanf("%d",&B);
  if((A+B) % 2 == 0){
    printf("%d\n", (A+B)/2);
  }else{
    printf("%s\n","IMPOSSIBLE");
  }
  return 0;
}