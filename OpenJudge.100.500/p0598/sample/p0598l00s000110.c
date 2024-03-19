#include<stdio.h>

int main(){
int A, B, S, D;
scanf("%d\n%d", &A, &B);
if(1<=A && A<=B && B<=20){
  if(B%A==0){
    S=A+B;
    printf("%d\n",S);
  }else{
    D=B-A;
    printf("%d\n",D);
  }
}
return 0;
}
