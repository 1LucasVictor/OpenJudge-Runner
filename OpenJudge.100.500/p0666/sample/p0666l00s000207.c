#include<stdio.h>

int main(void){
    int X, A, B;

    scanf("%d %d %d", &X, &A, &B);
    // printf("%d %d %d", X, A, B);

    if(B<=A){
      printf("delicious\n");
    }else if(A+1<=B && A+X>=B){
      printf("safe\n");
    }else{
      printf("dengerous\n");
    }

    return 0;
}
