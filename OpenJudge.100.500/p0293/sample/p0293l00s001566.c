#include <stdio.h>
#define a 100
#define swap(a,b) a^=b^=a^=b

int main(){
    
    int N, i, j, A[a], minj=100, count=0;
    
    scanf("%d", &N);
    for(i=0; i<N; i++)
        scanf("%d", &A[i]);
    
    for(i=0; i<N; i++){
        for(j=i+1; j<N ; j++){
            if(A[j] < A[minj]){
                minj = j;
            }
        }
        if(A[i]>A[minj]){
        swap(A[i], A[minj]);
        count++;
        }
    }
    
    for(i=0; i<N; i++){
        printf("%d", A[i]);
        if(i != N-1) printf(" ");
    }
    printf("\n%d\n", count);
    
    return 0;
}