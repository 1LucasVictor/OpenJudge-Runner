#include<stdio.h>
#include<stdlib.h>
int main(){
  int A,B,J,K,L ;
  scanf("%d",&A) ;
  scanf("%d",&B) ;
  if(A==B){
    exit(1) ;
  }

  J=A+B ;
  if(J%2 == 1){
    printf("IMPOSSIBLE") ;
    exit(0) ;
    }
  K=(A-B)/2 ;
  L=(A+B)/2 ;
  if(A-K==B-K){
    printf("%d",K) ;
  }else{
    printf("%d",L) ;
  }
}
