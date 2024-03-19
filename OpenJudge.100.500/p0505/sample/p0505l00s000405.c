#include<stdio.h>

int main() {
    int H, N;
    scanf("%d %d", &H, &N);

    int A[N];
    int i;
    for(i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < N; i++) {
        H = H - A[i];
    }

    if(H <= 0) {
        printf("Yes");
    } else {
        printf("No");
    }


    return 0;
}