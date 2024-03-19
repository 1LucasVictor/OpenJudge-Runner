#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    int i,j,k;
    int N,A,B;
  
    scanf("%d %d %d",&N,&A,&B);
    
    if(A*N <= B){
        printf("%d\n",A*N);
    }else{
        printf("%d\n",B);
    }
    
    return 0;
}

