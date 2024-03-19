#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int N;
    scanf("%d",&N);
    int M;
    if(N%2==0){
        M=N/2;
    }
    else{
        M=N/2+1;
    }
    printf("%d",M);
    return 0;
}