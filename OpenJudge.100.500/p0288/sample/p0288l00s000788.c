#include <stdio.h>

int main() {
    int i,j,v,N,A[1000];
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf(" %d",&A[i]);
    }
    for(i=0;i<N;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    
    for(i=1;i<N;i++){
        v = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > v){
            A[j+1] = A[j];
            A[j] = v;
            j--;
        }
        for(j=0;j<N;j++){
            printf("%d ",A[j]);
        }
        printf("\n");
    }

    return 0;
}

