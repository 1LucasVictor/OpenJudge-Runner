#include <stdio.h>
#include <string.h>
   
int main() {
          int X;
          int A;
          int B;
          scanf("%d %d %d", &X, &A, &B);
 
   if(A - B >= 0){
    printf("delicious");
   } else if ((X + A) - B >= 0) {
    printf("safe");
   } else {
    printf("dangerous");
   }
   return 0;
   }
          
   