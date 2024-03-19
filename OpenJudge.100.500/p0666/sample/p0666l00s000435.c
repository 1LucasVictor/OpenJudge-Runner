#include <stdio.h>
     
int main(void) {

int X,A,B;
   scanf("%d %d %d", &X, &A, &B);

   if(B-A <= 0){
      printf("delicious\n");
   }else if(B-A < X+1){
      printf("safe\n");
   }else {
      printf("dengerous\n");
   }

}
   