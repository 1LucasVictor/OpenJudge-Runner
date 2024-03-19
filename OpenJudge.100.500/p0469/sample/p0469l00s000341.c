#include <stdio.h>
 
int main(){
    int K;
      int A;
      int B;
      scanf("%d\n",&K);
      scanf("%d %d",&A,&B);
    if (A%K==0) {
        printf("OK\n");
    }
    if (A%K!=0) {
        while(A%K>=0){
            if(A==B){
            printf("NG\n");
                break;
            }
              if (A%K==0) {
                  printf("OK\n");
                  break;
              }
              A=A+1;
        }
    }
  return 0;
}
