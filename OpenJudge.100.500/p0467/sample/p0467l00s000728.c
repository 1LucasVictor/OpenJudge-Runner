#include<stdio.h>
#include<string.h>


int main(){
 long int   A, B,C, D;

scanf("%ld %ld %ld %ld", &A, &B, &C, &D);

 long int sum ;
  if(A+B >= D){
    sum = A;
  }else{
    sum = A-(D-A-B);
  }

    printf("%ld\n", sum);
  

return 0;
}