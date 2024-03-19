#include <stdio.h>
int main(void){
  int A;
  int B;
  scanf("%d %d",&A,&B);
  int s=1;
  int i;
  if(A>=B){
    s=1;
  }
  else{
    for(i=2;i<=1000000;i++){
      int x;
      x=(A-1)*(i-1)+A;
      if(x>=B){
        s=i;
        break;
      }
    }
  }
  printf("%d\n",s);
}