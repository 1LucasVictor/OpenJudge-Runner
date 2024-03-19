#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  scanf("%d",&x);
  
  int ureshisa = 0;
  int have500Yen = 0;
  int have5Yen = 0;
   //500円集計
   have500Yen = x / 500;
   x -= 500 * have500Yen;
   ureshisa += 1000 * have500Yen;
    
   //5円集計
   have5Yen = x / 5;
   ureshisa += 5 * have5Yen;
  
  printf("%d", ureshisa);
}