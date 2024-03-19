#include <stdio.h>
int main(void){
    // Your code here!
    int N, A, B;
    scanf("%d %d %d",&N,&A,&B);
    printf("%d\n",(N*A<B)? N*A:B);
}
