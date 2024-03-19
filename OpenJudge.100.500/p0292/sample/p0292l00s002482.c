#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j;
    int temp;
    int N;
    int A[100];
    int count = 0;
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    
    for(i=N-1;i>0;i--){
        for(j=i-1;j>=0;j--){
            if(A[j]>A[i]){
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
                count ++;
            }
        }
    }
    
    for(i=0;i<N;i++){
        if(i>0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n%d\n", count);
    
    return 0;
}