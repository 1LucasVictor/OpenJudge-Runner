#include<stdio.h>
#include <stdlib.h>

int main(){
    int A,B,C,W ;
    scanf("%d",&A) ;
    scanf("%d",&B) ;
    scanf("%d",&C) ;

    if(A<B){
      printf("A<B") ;
      exit(1) ;
    }

    W=C-(A-B) ;
    if (W < 0){
      printf("W<0") ;
      exit(1) ;
    }else{
      printf("%d",W);
    }
  }
