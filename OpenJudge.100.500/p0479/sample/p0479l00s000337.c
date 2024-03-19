#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int N;
    int ch;
  	int ret, ret2;
    
    ret = scanf("%d", &N);
    
    int A[N], B[N];
    
    
    for (int j=0;j < N; j++){
        A[j]=0;
        B[j]=0;
    }
    
    for(int k=0; k < (N-1); k++){
        ret2 = scanf("%d", &A[k]);
        //printf("A[%d]=%d\n", k, A[k]);
    }
    
    for(int k=0; k < (N-1); k++){
        B[A[k]-1]++;
    }
    
    for(int i=0; i < N; i++){
        
        printf("%d\n", B[i]);
        
    }
    
}
