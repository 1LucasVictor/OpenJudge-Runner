#include<stdio.h>

int main(){
    int N;

    scanf("%d", &N);
    int A[N];
    for (int i = 0; i <= N-2;i++){
        scanf("%d", &A[i]);
    }
    

    /*for (int i = 0; i <= N-2;i++){
        // scanf("%d", &A[i]);
        printf("%d", A[i]);
    }*/

    int x = 0;
    for (int i = 1; i <= N; i++){
        for (int j = 0; j <= N - 1;j++){
            if (A[j] == i){
                x++;
            }
        }
            
        printf("%d\n", x);
        x = 0;
    }

    return 0;
}