//atcoder clange
#include <stdio.h>
#include <stdlib.h>



int main(void){
  
   	long A,B;
      scanf("%ld", &A);//数値の取得
         scanf("%ld", &B);//数値の取得
  long a =0;
   long  K=0;
    long b = 0;
  long max = 0;
  if(A >= B){
    max = A;
  }else{
	max = B;
  }

for(K=0;K<max;K++){
  a = A-K;
 // printf("a:%d",a);
	b = B-K;
  if(abs(a)== abs(b)){
  printf("%ld",K);
    return 0;
  }
}
  printf("IMPOSSIBLE");
  
  
    return 0;
}