#include <stdio.h>
int main(void){
    // Your code here!
    int N, A;
    scanf("%d %d", &N, &A);
    if(N < A)
        printf("0");
    else
        printf("10");
    return 0;
}
