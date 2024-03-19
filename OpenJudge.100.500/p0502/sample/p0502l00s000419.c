#include<stdio.h>

int main(void)
{
    int N, i, flag=0, f2=0;
    scanf("%d", &N);
    int A[N];
    for(i=0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    for(i=0; i<N; i++) {
        if(A[i]%2 == 0) {
            f2 = 1;
        }
    }

    if(f2 == 1) {
        for(i=0; i<N; i++) {
            if(A[i]%2 == 0) {
                if(A[i]%3==0 || A[i]%5==0) {
                flag = 1;
                } else {
                    printf("DENIED\n");
                    return 0;
                }
            }
        }
    }
    
    if(flag == 1 || f2 == 0) {
        printf("APPROVED\n");
    }

    return 0;
}