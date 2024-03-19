#include <stdio.h>
int main(void){
    int i, j, a, N, A[100100]={};

    scanf("%d" ,&N);
    for(i=1 ; i<N ;i++){
        scanf("%d" ,&a);
        for(j=1; j<=i ; j++){
            if(j==a){
                A[j]++;
            }
        }
    }

    for(i=1 ; i<=N ; i++){
        printf("%d\n" , A[i]);
    }
    return 0;
}
