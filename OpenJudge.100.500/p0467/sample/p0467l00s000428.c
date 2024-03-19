#include<stdio.h>
#include<string.h>


int main(){
long int   A, B,C, D;

scanf("%ld %ld %ld %ld", &A, &B, &C, &D);

long long int sum ;
  if(A+B >= D){
    sum = A;
  }else{
    sum = A-(D-A-B) ;
  }

  if(sum <=0){
    printf("0\n");
  } else {
    printf("%lld\n", sum);
  } 

return 0;
}