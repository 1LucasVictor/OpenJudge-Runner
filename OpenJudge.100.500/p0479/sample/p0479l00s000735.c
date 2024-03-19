#include <stdio.h>
int main(void){
    int i, j, N, A[200100], B[200100];

    for(i=0 ; i<=N ; i++){
        B[i]=0;
    }

    scanf("%d" ,&N);
    A[0]=0;
    for(i=1 ; i<N ;i++){
        scanf("%d" ,&A[i]);
        for(j=1 ; j<=N ; j++){
            if(j==A[i]){
                B[j]++;
            }
        }
    }
    for(i=1 ; i<=N ; i++){
        printf("%d\n" , B[i]);
    }
    return 0;
}