#include<stdio.h>
int main(){
  int A,B,C;
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  if(A*B<=C){
    printf("%d\n",A*B);
  }else{
    printf("%d\n",C);
  }
  return 0;
}
    