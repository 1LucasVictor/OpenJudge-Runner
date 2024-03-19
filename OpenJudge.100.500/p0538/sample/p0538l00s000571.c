#include<stdio.h>
int main(void){
  int A;
  int B;
  scanf("%d",&A);
  scanf("%d",&B);
  if((A<=0)||(A>=10)||(B<=0)||(B>=10)){
    printf("-1");
  }
  if(((A>0)&&(A<10))&&((B>0)&&(B<10))){
    printf("%d",A*B);
  }
}