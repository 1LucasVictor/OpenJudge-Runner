#include <stdio.h>

int main(void){

    int N = 0;
    int K = 0;;
    scanf("%d %d", &N, &K);

    if (N == 1 || K == 1){
        printf("0\n");        
    } else if (N % 2 == 0 && K % 2 == 0){
        printf("2\n");        
    } else {
        printf("1\n");        
    } 
    return 0;
}