#include <stdio.h>

int main(){
    int n, i, A[10000], max=-1000000, min=1000000, sum=0;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
        if(A[i]>max){
            max=A[i];
        }else if(A[i]<min){
            min=A[i];
        }
        sum = sum+A[i];
    }
    
    printf("%d %d %d\n", min, max, sum);

    return 0;
}