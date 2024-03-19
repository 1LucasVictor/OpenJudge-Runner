#include<stdio.h>
#include<string.h>


int main(){
 //long int   A, B,C, D;
 int A,B,C,D;

//scanf("%ld %ld %ld %ld", &A, &B, &C, &D);
scanf("%d%d%d%d", &A, &B, &C, &D);

 long int sum ;
  /*if(A+B >= D){
    sum = A;
  }else{
    sum = A-(D-A-B);
  }*/

  if(D - A>0){
    if(D-A-B>0){
      sum = A-(D-A-B);
    }else 
    sum= A;
  }else 
  sum= D;

    printf("%ld\n", sum);
  

return 0;
}