//atcoder clange
#include <stdio.h>

int main(void){
    int N;
   int A,B;
   scanf("%d", &N);//数値の取得
   scanf("%d", &A);//数値の取得
   scanf("%d", &B);//数値の取得
  
  if(N*A > B){
	printf("%d",B);
    return 0;
  }else if(N*A <= B){
	printf("%d",N*A);
    return 0;
  }
  return 0;
}